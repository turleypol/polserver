#include <fstream>
#include <iostream>
#include <string>

#include "streamsaver.h"

namespace Pol
{
namespace Clib
{
const std::size_t flush_limit = 10000;  // 500;

void StreamWriter::flush_test()
{
  if ( _buf.size() >= flush_limit )  // guard against to big objects
    flush();
}

/// ofstream implementation (simple non threaded)
OFStreamWriter::OFStreamWriter()
    : StreamWriter(),
      _stream(),
#if 0
      _fs_time( 0 ),
#endif
      _stream_name()
{
}

OFStreamWriter::OFStreamWriter( std::ofstream* stream )
    : StreamWriter(),
      _stream( stream ),
#if 0
      _fs_time( 0 ),
#endif
      _stream_name()
{
}

OFStreamWriter::~OFStreamWriter()
{
#if 0
  if ( !_buf.empty() )
  {
    Tools::HighPerfTimer t;
    *_stream << _buf;
    _fs_time += t.ellapsed();
  }
  ERROR_PRINTLN( "streamwriter {} io time {}", _stream_name, _fs_time.count() );
#else
  if ( !_buf.empty() )
    *_stream << _buf;
#endif
}

void OFStreamWriter::init( const std::string& filepath )
{
  _stream->exceptions( std::ios_base::failbit | std::ios_base::badbit );
  _stream->open( filepath.c_str(), std::ios::out | std::ios::trunc );
  _stream_name = filepath;
}

void OFStreamWriter::flush()
{
#if 0
      Tools::HighPerfTimer t;
#endif
  if ( !_buf.empty() )
  {
    *_stream << _buf;
    _buf.clear();
  }
#if 0
      _fs_time += t.ellapsed( );
#endif
}

void OFStreamWriter::flush_file()
{
  flush();
  _stream->flush();
}

}  // namespace Clib
}  // namespace Pol
