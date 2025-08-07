/** @file
 *
 * @par History
 */


#include "stackcfg.h"

#include <filesystem>
#include <string>

#include "../clib/cfgelem.h"
#include "../clib/cfgfile.h"
#include "../clib/fileutil.h"
#include "../clib/stlutil.h"
#include "../plib/pkg.h"
#include "../plib/systemstate.h"
#include "globals/uvars.h"


namespace Pol
{
namespace Core
{
namespace fs = std::filesystem;
void read_stacking_cfg( Clib::ConfigFile& cf )
{
  Clib::ConfigElem elem;
  if ( cf.read( elem ) )
  {
    if ( elem.type_is( "Stacking" ) )
    {
      std::string temp = elem.remove_string( "IgnoreCprops" );
      ISTRINGSTREAM is( temp );
      std::string cprop_name;
      while ( is >> cprop_name )
        gamestate.Global_Ignore_CProps.insert( cprop_name );
    }
  }
}

void load_stacking_cfg()
{
  fs::path main_cfg = "config/stacking.cfg";

  if ( fs::exists( main_cfg ) )
  {
    Clib::ConfigFile cf_main( main_cfg );
    read_stacking_cfg( cf_main );
  }
  for ( const auto& pkg : Plib::systemstate.packages )
  {
    auto filename = Plib::GetPackageCfgPath( pkg, "stacking.cfg" );
    if ( fs::exists( filename ) )
    {
      Clib::ConfigFile cf( filename );
      read_stacking_cfg( cf );
    }
  }
}
}  // namespace Core
}  // namespace Pol
