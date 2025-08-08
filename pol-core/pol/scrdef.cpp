/** @file
 *
 * @par History
 */

#include "scrdef.h"
#include <filesystem>

#include "../bscript/escrutil.h"
#include "../clib/fileutil.h"
#include "../clib/logfacility.h"
#include "../plib/pkg.h"

namespace Pol
{
namespace Core
{
namespace fs = std::filesystem;
std::string full_scriptname( const std::string& spec, const Plib::Package* pkg,
                             const char* mainpfx )
{
  if ( spec.empty() )
    return spec;
  fs::path filename( spec );
  auto addecl = []( fs::path&& p )
  {
    if ( p.extension() != ".ecl" )
      p += ".ecl";
    return p;
  };

  if ( pkg != nullptr )
    return addecl( pkg->dir() / spec );

  if ( spec.find( '/' ) == std::string::npos )
    return addecl( fs::path{ mainpfx } / spec );
  else
    return addecl( fs::path{ "scripts" } / spec );
}

ScriptDef::ScriptDef( const std::string& iname, const Plib::Package* ipkg, const char* mainpfx )
{
  config( iname, ipkg, mainpfx, true );
}

ScriptDef::ScriptDef( const std::string& iname, const Plib::Package* ipkg )
{
  config( iname, ipkg, "", true );
}

bool ScriptDef::operator==( const ScriptDef& other ) const
{
  if ( empty() && other.empty() )
    return true;

  return pkg_ == other.pkg_ && name_ == other.name_;
}
bool ScriptDef::operator!=( const ScriptDef& other ) const
{
  return !( *this == other );
}

void ScriptDef::config( const std::string& iname, const Plib::Package* ipkg, const char* mainpfx,
                        bool warn_if_not_found )
{
  std::string path;
  const Plib::Package* npkg;
  if ( !Plib::pkgdef_split( iname, ipkg, &npkg, &path ) )
  {
    ERROR_PRINTLN( "Error reading script descriptor '{}'", iname );
    throw std::runtime_error( "Error reading script descriptor" );
  }

  localname_ = path;
  name_ = full_scriptname( path, npkg, mainpfx );
  pkg_ = npkg;

  if ( warn_if_not_found )
  {
    if ( !empty() && !exists() )
    {
      ERROR_PRINTLN( "Warning! {} does not exist!", name_.get() );
    }
  }
}

void ScriptDef::config( const std::string& iname, const Plib::Package* ipkg )
{
  config( iname, ipkg, "", true );
}

bool ScriptDef::config_nodie( const std::string& iname, const Plib::Package* ipkg,
                              const char* mainpfx )
{
  std::string path;
  const Plib::Package* npkg;
  if ( !Plib::pkgdef_split( iname, ipkg, &npkg, &path ) )
  {
    ERROR_PRINTLN( "Error reading script descriptor '{}'", iname );
    return false;
  }

  localname_ = iname;
  name_ = full_scriptname( path, npkg, mainpfx );
  pkg_ = npkg;

  return true;
}

std::string ScriptDef::qualifiedname() const
{
  if ( empty() )
    return "";
  else
    return ":" + ( pkg_ ? pkg_->name() : "" ) + ":" + localname_.get();
}

std::string ScriptDef::relativename( const Plib::Package* pkg ) const
{
  if ( empty() )
    return "";
  else if ( pkg == pkg_ )
    return localname_;
  else
    return qualifiedname();
}

void ScriptDef::quickconfig( const Plib::Package* pkg, const std::string& name_ecl )
{
  localname_ = "unknown";
  name_ = pkg->dir() / name_ecl;
  pkg_ = pkg;
}

void ScriptDef::quickconfig( const std::string& name_ecl )
{
  localname_ = "unknown";
  name_ = name_ecl;
  pkg_ = nullptr;
}

bool ScriptDef::exists() const
{
  return !empty() && fs::exists( name() );
}

void ScriptDef::clear()
{
  localname_ = "";
  name_ = "";
  pkg_ = nullptr;
}

size_t ScriptDef::estimatedSize() const
{
  return sizeof( ScriptDef );
}
}  // namespace Core
}  // namespace Pol
