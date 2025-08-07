/** @file
 *
 * @par History
 */


#ifndef BSCRIPT_ESCRUTIL_H
#define BSCRIPT_ESCRUTIL_H

#include <string>
namespace Pol
{
namespace Bscript
{
class BObjectImp;

BObjectImp* bobject_from_string( const std::string& str, int radix = 0 );
}  // namespace Bscript
}  // namespace Pol
#endif
