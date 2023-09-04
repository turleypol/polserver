/** @file
 *
 * @par History
 */


#include "basiciomod.h"
#include "bscript/berror.h"
#include "bscript/impstr.h"
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
  Bscript::String* color;
  if ( !exec.getStringParam( 1, color ) )
    return new Bscript::BError( "Invalid parameter type" );
  if ( color->length() )
  {
    INFO_PRINT << color << exec.getParamImp( 0 )->getStringRep() << Logging::CONSOLE_RESET_COLOR
               << "\n";
  }
  else
  {
    INFO_PRINT << exec.getParamImp( 0 )->getStringRep() << "\n";
  }
  return new Bscript::UninitObject;
}
}  // namespace Module
}  // namespace Pol
