#include <exception>
#include <fstream>
#include <ios>
#include <iostream>
#include <string>

#include "streamsaver.h"

namespace Pol::Clib
{
StreamWriter::StreamWriter( std::string path )
    : _file( _fopen( path.c_str(), O_WRONLY | O_CREAT | O_TRUNC ) )
{
}

StreamWriter::~StreamWriter() noexcept( false )
{
  auto stack_unwinding = std::uncaught_exceptions();
  try
  {
    flush();
  }
  catch ( ... )
  {
    // during stack unwinding an exception would terminate
    if ( !stack_unwinding )
      throw;
  }
}

/*void StreamWriter::open_fstream( const std::string& filepath, std::ofstream& s )
{
  s.exceptions( std::ios_base::failbit | std::ios_base::badbit );
  s.open( filepath, std::ios::out | std::ios::trunc );
}*/

void StreamWriter::flush()
{
  if ( _mbuff.size() )
    fwrite( _mbuff.data(), sizeof( char ), _mbuff.size(), _file );
  _mbuff.clear();
  fclose( _file );
}

}  // namespace Pol::Clib
