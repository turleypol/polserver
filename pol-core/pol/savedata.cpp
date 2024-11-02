/** @file
 *
 * @par History
 * - 2007/06/17 Shinigami: added config.world_data_path
 */


#include "savedata.h"

#include <cerrno>
#include <exception>
#include <fstream>

#include "../clib/clib_endian.h"
#include "../clib/fileutil.h"
#include "../clib/iohelp.h"
#include "../clib/logfacility.h"
#include "../clib/rawtypes.h"
#include "../clib/streamsaver.h"
#include "../clib/strutil.h"
#include "../clib/timer.h"
#include "../plib/systemstate.h"
#include "globals/object_storage.h"
#include "globals/uvars.h"
#include "item/item.h"
#include "item/itemdesc.h"
#include "objecthash.h"
#include "storage.h"
#include "uobject.h"

namespace Pol
{
namespace Core
{

bool commit_incremental( const std::string& basename )
{
  std::string datfile = Plib::systemstate.config.world_data_path + basename + ".txt";
  std::string ndtfile = Plib::systemstate.config.world_data_path + basename + ".ndt";

  bool any = false;

  if ( Clib::FileExists( datfile ) )
  {
    any = true;
    if ( unlink( datfile.c_str() ) )
    {
      int err = errno;
      POLLOG_ERRORLN( "Unable to delete {}: {} ({})", datfile, strerror( err ), err );
    }
  }
  if ( Clib::FileExists( ndtfile ) )
  {
    any = true;
    if ( rename( ndtfile.c_str(), datfile.c_str() ) )
    {
      int err = errno;
      POLLOG_ERRORLN( "Unable to rename {} to {}: {} ({})", ndtfile, datfile, strerror( err ),
                      err );
    }
  }

  return any;
}
}  // namespace Core
}  // namespace Pol
