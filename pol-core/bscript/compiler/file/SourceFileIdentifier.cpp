#include "SourceFileIdentifier.h"
#include "clib/filecont.h"
#include "clib/strutil.h"

namespace Pol::Bscript::Compiler
{
SourceFileIdentifier::SourceFileIdentifier( unsigned index, std::filesystem::path path )
    : index( index ), path( std::move( path ) ), _lines()
{
}

const std::vector<std::string>& SourceFileIdentifier::getLines() const
{
  if ( !_lines.empty() )
    return _lines;

  std::string content{ Clib::FileContents{ path, true }.take() };
  Clib::sanitizeUnicodeWithIso( &content );
  std::string::size_type pos = 0;
  std::string::size_type prev = 0;

  while ( ( pos = content.find_first_of( "\n\r", prev ) ) != std::string::npos )
  {
    auto strpos = pos;
    if ( content[pos] == '\r' && pos + 1 < content.size() && content[pos + 1] == '\n' )
      ++pos;  // windows lineendings..
    _lines.push_back( content.substr( prev, strpos - prev ) );
    prev = pos + 1;
  }

  if ( prev < content.length() )
    _lines.push_back( content.substr( prev ) );

  return _lines;
}
}  // namespace Pol::Bscript::Compiler
