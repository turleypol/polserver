/** @file
 *
 * @par History
 * - 2005/07/26 Shinigami: you can use "commands/cmdlevel" to hold textcmds in packages too
 */


#include "cmdlevel.h"

#include <memory>
#include <stddef.h>
#include <string>
#include <system_error>

#include "../bscript/bstruct.h"
#include "../bscript/impstr.h"
#include "../clib/cfgelem.h"
#include "../clib/cfgfile.h"
#include "../clib/clib.h"
#include "../clib/fileutil.h"
#include "../clib/stlutil.h"
#include "../clib/strutil.h"
#include "../plib/pkg.h"
#include "../plib/systemstate.h"
#include "bscript/dict.h"
#include "globals/uvars.h"
namespace Pol
{
namespace Core
{
namespace fs = std::filesystem;
CmdLevel::CmdLevel( Clib::ConfigElem& elem, int cmdlevelnum )
    : name( elem.rest() ), cmdlevel( static_cast<unsigned char>( cmdlevelnum ) )
{
  Clib::mklowerASCII( name );
  std::string tmp;
  while ( elem.remove_prop( "DIR", &tmp ) )
  {
    Clib::mklowerASCII( tmp );
    add_searchdir( nullptr, fs::path{ tmp } );
  }
  while ( elem.remove_prop( "ALIAS", &tmp ) )
  {
    Clib::mklowerASCII( tmp );
    aliases.push_back( tmp );
  }
}

bool CmdLevel::matches( const std::string& i_name ) const
{
  if ( Clib::stringicmp( i_name, name ) == 0 )
    return true;
  for ( Aliases::const_iterator itr = aliases.begin(); itr != aliases.end(); ++itr )
  {
    if ( Clib::stringicmp( i_name, *itr ) == 0 )
      return true;
  }
  return false;
}
void CmdLevel::add_searchdir( Plib::Package* pkg, const fs::path& dir )
{
  searchlist.emplace_back( SearchDir{ pkg, dir } );
}
void CmdLevel::add_searchdir_front( Plib::Package* pkg, const fs::path& dir )
{
  searchlist.insert( searchlist.begin(), SearchDir{ pkg, dir } );
}

size_t CmdLevel::estimateSize() const
{
  size_t size = name.capacity() + sizeof( unsigned char ); /*cmdlevel*/

  size += Clib::memsize( searchlist );
  for ( const auto& ele : searchlist )
    size += ele.dir.native().capacity();
  size += Clib::memsize( aliases );
  return size;
}


CmdLevel* find_cmdlevel( const char* name )
{
  for ( auto& cmdlvl : gamestate.cmdlevels )
  {
    if ( stricmp( name, cmdlvl.name.c_str() ) == 0 )
      return &cmdlvl;
  }
  return nullptr;
}

CmdLevel* FindCmdLevelByAlias( const std::string& str )
{
  for ( auto& cmdlvl : gamestate.cmdlevels )
  {
    if ( cmdlvl.matches( str ) )
      return &cmdlvl;
  }
  return nullptr;
}

std::unique_ptr<Bscript::BDictionary> ListAllCommandsInPackage( Plib::Package* m_pkg,
                                                                int max_cmdlevel /*= -1*/ )
{
  auto cmd_lvl_list = std::make_unique<Bscript::BDictionary>();

  if ( max_cmdlevel < 0 )
    max_cmdlevel = static_cast<int>( Core::gamestate.cmdlevels.size() - 1 );

  for ( int num = 0; num <= max_cmdlevel; ++num )
  {
    auto script_list = Core::ListCommandsInPackageAtCmdlevel( m_pkg, num );
    if ( script_list->ref_arr.empty() )
      continue;
    else
      cmd_lvl_list->addMember( new Bscript::BLong( num ), script_list.release() );
  }
  return cmd_lvl_list;
}


std::unique_ptr<Bscript::ObjArray> ListCommandsInPackageAtCmdlevel( Plib::Package* m_pkg,
                                                                    int cmdlvl_num )
{
  auto script_names = std::make_unique<Bscript::ObjArray>();

  if ( cmdlvl_num >= static_cast<int>( gamestate.cmdlevels.size() ) )
    cmdlvl_num = static_cast<int>( gamestate.cmdlevels.size() - 1 );

  CmdLevel& cmdlevel = gamestate.cmdlevels[cmdlvl_num];

  for ( unsigned diridx = 0; diridx < cmdlevel.searchlist.size(); ++diridx )
  {
    CmdLevel::SearchDir* search_dir = &cmdlevel.searchlist[diridx];
    Plib::Package* pkg = search_dir->pkg;
    auto dir_name = search_dir->dir;
    if ( ( !pkg && m_pkg ) || ( pkg && !m_pkg ) )
      continue;
    if ( pkg && m_pkg )
    {
      if ( pkg != m_pkg )
        continue;
      dir_name = pkg->dir() / dir_name;
    }
    std::error_code ec;
    for ( const auto& dir_entry : fs::directory_iterator( dir_name, ec ) )
    {
      if ( !dir_entry.is_regular_file() )
        continue;
      if ( const auto& fn = dir_entry.path().filename().native();
           !fn.empty() && *fn.begin() == '.' )
        continue;

      const auto ext = dir_entry.path().extension();
      if ( ext == ".ecl" )
      {
        std::unique_ptr<Bscript::BStruct> cmdinfo( new Bscript::BStruct );
        cmdinfo->addMember( "dir", new Bscript::String( search_dir->dir.generic_string() ) );
        cmdinfo->addMember( "script", new Bscript::String( dir_entry.path().filename().string() ) );
        script_names->addElement( cmdinfo.release() );
      }
    }
  }

  return script_names;
}

void load_cmdlevels()
{
  Clib::ConfigFile cf( "config/cmds.cfg", "CmdLevel" );
  Clib::ConfigElem elem;

  while ( cf.read( elem ) )
  {
    CmdLevel cmdlevel( elem, static_cast<int>( gamestate.cmdlevels.size() ) );
    gamestate.cmdlevels.push_back( cmdlevel );
  }
}

void process_package_cmds_cfg( Plib::Package* pkg )
{
  Clib::ConfigFile cf( GetPackageCfgPath( pkg, "cmds.cfg" ), "Commands" );
  Clib::ConfigElem elem;
  while ( cf.read( elem ) )
  {
    CmdLevel* cmdlevel = find_cmdlevel( elem.rest() );
    if ( !cmdlevel )
    {
      elem.throw_error( std::string( "Command Level " ) + elem.rest() + " not found." );
    }

    std::string tmp;
    while ( elem.remove_prop( "DIR", &tmp ) )
    {
      Clib::mklowerASCII( tmp );
      cmdlevel->add_searchdir_front( pkg, ( pkg->dir() / tmp ).generic_string() );
    }
  }
}

// look for a "textcmd/cmdlevel" or "commands/cmdlevel" directory for each name and alias
void implicit_package_cmds_cfg( Plib::Package* pkg )
{
  for ( const auto& cmdlevel : gamestate.cmdlevels )
  {
    fs::path part;

    // first check for the package name
    part = fs::path{ "textcmd" } / cmdlevel.name;
    if ( fs::exists( pkg->dir() / part ) )
      cmdlevel.add_searchdir_front( pkg, part.generic_string() );

    part = fs::path{ "commands" } / cmdlevel.name;
    if ( fs::exists( pkg->dir() / part ) )
      cmdlevel.add_searchdir_front( pkg, part.generic_string() );

    // then each alias
    for ( const auto& alias : cmdlevel.aliases )
    {
      part = fs::path{ "textcmd" } / alias;
      if ( fs::exists( pkg->dir() / part ) )
        cmdlevel.add_searchdir_front( pkg, part.generic_string() );

      part = fs::path{ "commands" } / alias;
      if ( fs::exists( pkg->dir() / part ) )
        cmdlevel.add_searchdir_front( pkg, part.generic_string() );
    }
  }
}

void load_package_cmdlevels()
{
  for ( const auto& pkg : Plib::systemstate.packages )
  {
    auto filename = Plib::GetPackageCfgPath( pkg, "cmds.cfg" );
    if ( fs::exists( filename ) )
    {
      process_package_cmds_cfg( pkg );
    }
    else
    {
      implicit_package_cmds_cfg( pkg );
    }
  }
}
}  // namespace Core
}  // namespace Pol
