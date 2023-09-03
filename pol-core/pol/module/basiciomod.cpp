/** @file
 *
 * @par History
 */


#include "basiciomod.h"
#include "berror/berror.h"
#include "clib/logfacility.h"

#include <module_defs/basicio.h>

namespace Pol
{
namespace Module
{
BasicIoExecutorModule::BasicIoExecutorModule( Bscript::Executor& exec )
    : Bscript::TmplExecutorModule<BasicIoExecutorModule, Bscript::ExecutorModule>( exec )
{
}

Bscript::BObjectImp* BasicIoExecutorModule::mf_Print()
{
  int color{ 0 };
  if ( !exec.getParam( 1, color ) )
    return new BError( "Invalid parameter type" );
  if ( color > 0 && color < 100 )
  {
    constexpr char RESET_COLOR[] = "\x1b[0m";
    INFO_PRINT << "\x1b[" << color << exec.getParamImp( 0 )->getStringRep() << RESET_COLOR << "\n";
  }
  else
  {
    INFO_PRINT << exec.getParamImp( 0 )->getStringRep() << "\n";
  }
  return new Bscript::UninitObject;
}
}  // namespace Module
}  // namespace Pol
