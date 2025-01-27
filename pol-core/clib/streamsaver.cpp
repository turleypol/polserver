#include <exception>
#include <fstream>
#include <ios>
#include <iostream>
#include <string>

#include "streamsaver.h"

namespace Pol::Clib
{
StreamWriter::StreamWriter( std::ostream& stream ) : _stream( stream ) {}

StreamWriter::~StreamWriter() noexcept( false )
{
  if ( _mbuff.size() )
    _stream << fmt::to_string( _mbuff );
  _mbuff.clear();
  _stream.flush();
}

void StreamWriter::open_fstream( const std::string& filepath, std::ofstream& s )
{
  //  _buf.reset( new char[1024 * 1024 * 1024] );
  s.exceptions( std::ios_base::failbit | std::ios_base::badbit );
  s.open( filepath, std::ios::out | std::ios::trunc );
  // s.rdbuf()->pubsetbuf( _buf.get(), 1024 * 1024 * 1024 );
}

void StreamWriter::flush_file()
{
  if ( _mbuff.size() )
    _stream << fmt::to_string( _mbuff );
  _mbuff.clear();
  _stream.flush();
}

}  // namespace Pol::Clib
