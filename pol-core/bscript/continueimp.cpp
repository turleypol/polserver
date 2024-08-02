#include "continueimp.h"
#include "executor.h"

namespace Pol
{
namespace Bscript
{
BContinuation::BContinuation( BObjectRef funcref, ContinuationCallbackWrapper wrapper,
                              void* wrapperData )
    : BObjectImp( BObjectImp::OTContinuation ),
      funcref_( std::move( funcref ) ),
      wrapper_( wrapper ),
      wrapperData_( wrapperData )
{
}

BContinuation::~BContinuation()
{
  wrapper_.free( wrapperData_ );
}

BObjectImp* BContinuation::continueWith( Executor& exec, BObjectRef result )
{
  return wrapper_.call( exec, this, wrapperData_, std::move( result ) );
}

BObjectImp* BContinuation::copy( void ) const
{
  return nullptr;
}

size_t BContinuation::sizeEstimate() const
{
  return sizeof( BContinuation ) + wrapper_.size();
}

std::string BContinuation::getStringRep() const
{
  return "<continuation>";
}
}  // namespace Bscript
}  // namespace Pol
