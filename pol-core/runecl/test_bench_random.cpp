
#include "../clib/clib_endian.h"
#include <benchmark/benchmark.h>
#include <boost/endian.hpp>
#include <boost/endian/conversion.hpp>
static void BM_makro( benchmark::State& state )
{
  int i = 0;
  while ( state.KeepRunning() )
  {
    int j = i++;
    i = cfBEu32( j );
  }
}
BENCHMARK( BM_makro );
static void BM_boost( benchmark::State& state )
{
  int i = 0;
  while ( state.KeepRunning() )
  {
    int j = i++;
    i = boost::endian::native_to_big( j );
  }
}
BENCHMARK( BM_boost );
