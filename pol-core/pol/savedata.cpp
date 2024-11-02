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

}  // namespace Core
}  // namespace Pol
