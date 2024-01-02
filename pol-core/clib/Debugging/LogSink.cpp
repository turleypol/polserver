#include "LogSink.h"

#include <chrono>
#include <fmt/chrono.h>
#include <fmt/format.h>
#include <time.h>

#include "../clib.h"

namespace Pol
{
namespace Clib
{
namespace Logging
{
using std::chrono::system_clock;

void LogSink::addTimeStamp( std::ostream& stream )
{
  stream << getTimeStamp();
}

std::string LogSink::getTimeStamp()
{
  time_t tClockTime = system_clock::to_time_t( system_clock::now() );
  struct tm tTime = Clib::localtime( tClockTime );

  // write "[%m/%d %H:%M:%S] "
  return fmt::format( "[{:%m/%d %T}] ", tTime );
}

}  // namespace Logging
}  // namespace Clib
}  // namespace Pol
