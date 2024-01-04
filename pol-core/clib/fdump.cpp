/** @file
 *
 * @par History
 */


#include "fdump.h"
#include <fmt/format.h>

namespace Pol::Clib
{
void dump16( fmt::Writer& writer, const unsigned char* s, int len )
{
  int i;
  for ( i = 0; i < 16; i++ )
  {
    if ( i < len )
      writer.Format( "{:02x} " ) << (int)s[i];
    else
      writer << "   ";
    if ( i == 7 )
      writer << " ";
  }
  writer << "  ";

  for ( i = 0; i < 16; i++ )
  {
    if ( i >= len || !isprint( s[i] ) )
      writer << '.';
    else
      writer.Format( "{}" ) << s[i];

    if ( i == 7 )
      writer << ' ';
  }
  writer << '\n';
}

void fdump( fmt::Writer& writer, const void* data, int len )
{
  int i;
  const unsigned char* s = (const unsigned char*)data;

  for ( i = 0; i < len; i += 16 )
  {
    int nprint = len - i;
    if ( nprint > 16 )
      nprint = 16;
    writer.Format( "{:04x} " ) << i;
    dump16( writer, &s[i], nprint );
  }
}

void dump16( std::back_insert_iterator<std::string>& buffer, const unsigned char* s, int len )
{
  int i;
  for ( i = 0; i < 16; i++ )
  {
    if ( i < len )
      fmt::format_to( buffer, "{:02x} ", (int)s[i] );
    else
      buffer.push_back( "   " );
    if ( i == 7 )
      buffer.push_back( " " );
  }
  buffer.push_back( "  " );

  for ( i = 0; i < 16; i++ )
  {
    if ( i >= len || !isprint( s[i] ) )
      buffer.push_back( '.' );
    else
      fmt::format( "{}", s[i] );

    if ( i == 7 )
      buffer.push_back( ' ' );
  }
  buffer.push_back( '\n' );
}

void fdump( std::back_insert_iterator<std::string>& buffer, const void* data, int len )
{
  int i;
  const unsigned char* s = (const unsigned char*)data;

  for ( i = 0; i < len; i += 16 )
  {
    int nprint = len - i;
    if ( nprint > 16 )
      nprint = 16;
    fmt::format_to( buffer, "{:04x} ", i );
    dump16( buffer, &s[i], nprint );
  }
}
}  // namespace Pol::Clib
