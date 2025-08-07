/** @file
 *
 * @par History
 * - 2009/09/03 MuadDib:   Relocation of multi related cpp/h
 */


#include <filesystem>
#include <string>

#include "../../clib/cfgfile.h"
#include "../../clib/fileutil.h"
#include "../../clib/refptr.h"
#include "../../plib/pkg.h"
#include "../../plib/systemstate.h"
#include "../cfgrepos.h"

namespace Pol
{
namespace Multi
{
namespace fs = std::filesystem;
void load_special_storedconfig( const std::string& cfgname )
{
  fs::path main_cfg = "config/" + cfgname + ".cfg";

  Core::CreateEmptyStoredConfigFile( main_cfg );
  ref_ptr<Core::StoredConfigFile> scfg = Core::FindConfigFile( main_cfg, "" );
  if ( fs::exists( main_cfg ) )
  {
    Clib::ConfigFile cf_main( main_cfg );
    scfg->load( cf_main );
  }

  for ( const auto& pkg : Plib::systemstate.packages )
  {
    auto filename = Plib::GetPackageCfgPath( pkg, cfgname + ".cfg" );
    if ( fs::exists( filename ) )
    {
      Clib::ConfigFile cf( filename );
      scfg->load( cf );
    }
  }
}
}  // namespace Multi
}  // namespace Pol
