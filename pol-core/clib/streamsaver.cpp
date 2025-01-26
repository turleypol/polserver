#include <exception>
#include <fstream>
#include <ios>
#include <iostream>
#include <string>

#include "streamsaver.h"

namespace Pol::Clib
{
StreamWriter::StreamWriter( std::ostream& stream ) : _stream( stream ) {}

void StreamWriter::open_fstream( const std::string& filepath, std::ofstream& s )
{
  s.exceptions( std::ios_base::failbit | std::ios_base::badbit );
  s.open( filepath, std::ios::out | std::ios::trunc );
}

void StreamWriter::flush_file()
{
  _stream.flush();
}

}  // namespace Pol::Clib
