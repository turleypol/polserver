/** @file
 *
 * @par History
 */

#include <algorithm>
#include <array>
#include <cstring>
#include <string>

#include "../../clib/logfacility.h"
#include "../../clib/rawtypes.h"
#include "../../plib/maptile.h"
#include "../dynproperties.h"
#include "../globals/uvars.h"
#include "../item/item.h"
#include "../network/packethelper.h"
#include "../polclock.h"
#include "../realms/realm.h"
#include "../uworld.h"
#include "testenv.h"

#include <curl/curl.h>

namespace Pol
{
namespace Testing
{
void dummy() {}

void map_test()
{
  Plib::MAPTILE_CELL cell = Core::gamestate.main_realm->getmaptile( Core::Pos2d( 1453, 1794 ) );
  INFO_PRINTLN( "{} {}", cell.landtile, cell.z );
}

void dynprops_test()
{
  class Test : public Core::DynamicPropsHolder
  {
  public:
    DYN_PROPERTY( armod, s16, Core::PROP_AR_MOD, 0 );
    DYN_PROPERTY( max_items, u32, Core::PROP_MAX_ITEMS_MOD, 0 );
    DYN_PROPERTY( itemname, std::string, Core::PROP_NAME_SUFFIX, "" );
  };
  Test h;
  if ( h.armod() || h.has_armod() )
  {
    INFO_PRINTLN( "initial ar {} {}", h.armod(), h.has_armod() );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
  h.armod( 10 );
  if ( h.armod() != 10 || !h.has_armod() )
  {
    INFO_PRINTLN( "ar {} {}", h.armod(), h.has_armod() );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
  h.armod( 0 );
  if ( h.armod() || h.has_armod() )
  {
    INFO_PRINTLN( "removed ar {} {}", h.armod(), h.has_armod() );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();

  if ( !h.itemname().empty() || h.has_itemname() )
  {
    INFO_PRINTLN( "initial name {} {}", h.itemname(), h.has_itemname() );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
  h.itemname( "hello world" );
  if ( h.itemname() != "hello world" || !h.has_itemname() )
  {
    INFO_PRINTLN( "name {} {}", h.itemname(), h.has_itemname() );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
  h.itemname( "" );
  if ( !h.itemname().empty() || h.has_itemname() )
  {
    INFO_PRINTLN( "removed name {} {}", h.itemname(), h.has_itemname() );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
}

void packet_test()
{
  using namespace Network;
  using namespace Network::PktHelper;
  auto debug = []( const PacketOut<PktOut_2F>& p )
  {
    std::string w;
    for ( auto& c : p->buffer )
    {
      w += fmt::format( "{:x} ", c );
    }
    INFO_PRINTLN( w );
  };
  auto test = [&]( const PacketOut<PktOut_2F>& p, const std::array<s8, 10>& a )
  {
    if ( std::equal( std::begin( p->buffer ), std::end( p->buffer ), std::begin( a ) ) )
      UnitTest::inc_successes();
    else
    {
      UnitTest::inc_failures();
      INFO_PRINTLN( "failed" );
      debug( p );
      std::string w;
      for ( auto& c : a )
      {
        w += fmt::format( "{:x} ", c );
      }
      INFO_PRINTLN( w );
    }
  };
  {
    PacketOut<PktOut_2F> p;  // size 10
    p->Write<s8>( 0x12 );
    p->Write<u8>( 0x21u );
    p->WriteFlipped<s8>( 0x12 );
    p->WriteFlipped<u8>( 0x21u );
    p->Write<u8>( 0u );
    std::array<s8, 10> a{ { 0x2f, 0x12, 0x21, 0x12, 0x21, 0, 0, 0, 0, 0 } };
    test( p, a );
  }
  {
    PacketOut<PktOut_2F> p;  // size 10
    p->Write<s16>( 0x1234 );
    p->Write<u16>( 0x4321u );
    p->WriteFlipped<s16>( 0x1234 );
    p->WriteFlipped<u16>( 0x4321u );
    p->Write<u8>( 0u );
    std::array<s8, 10> a{ { 0x2f, 0x34, 0x12, 0x21, 0x43, 0x12, 0x34, 0x43, 0x21, 0 } };
    test( p, a );
  }
  {
    PacketOut<PktOut_2F> p;  // size 10
    p->Write<s32>( 0x12344321 );
    p->Write<u32>( 0x12344321u );
    p->Write<u8>( 0u );
    std::array<s8, 10> a{ { 0x2f, 0x21, 0x43, 0x34, 0x12, 0x21, 0x43, 0x34, 0x12, 0 } };
    test( p, a );
  }
  {
    PacketOut<PktOut_2F> p;  // size 10
    p->WriteFlipped<s32>( 0x12344321 );
    p->WriteFlipped<u32>( 0x12344321u );
    p->Write<u8>( 0u );
    std::array<s8, 10> a{ { 0x2f, 0x12, 0x34, 0x43, 0x21, 0x12, 0x34, 0x43, 0x21, 0 } };
    test( p, a );
  }
  {
    PacketOut<PktOut_2F> p;  // size 10
    std::string s( "1234" );
    p->Write( s.c_str(), 4, false );
    u8 b[] = { 0x12, 0x34, 0x43, 0x21 };
    p->Write( b, 4 );
    p->Write<u8>( 0u );
    std::array<s8, 10> a{ { 0x2f, 0x31, 0x32, 0x33, 0x34, 0x12, 0x34, 0x43, 0x21, 0 } };
    test( p, a );
  }
}

void test_splitnamevalue( const std::string& istr, const std::string& exp_pn,
                          const std::string& exp_pv )
{
  std::string pn, pv;
  Clib::splitnamevalue( istr, pn, pv );
  if ( pn != exp_pn || pv != exp_pv )
  {
    INFO_PRINTLN( "splitnamevalue( \"{}\" ) fails!", istr );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
}

void test_splitnamevalue()
{
  test_splitnamevalue( "a b", "a", "b" );
  test_splitnamevalue( "av bx", "av", "bx" );
  test_splitnamevalue( "nm=valu", "nm", "valu" );
  test_splitnamevalue( "nm:valu", "nm:valu", "" );
  test_splitnamevalue( "nm", "nm", "" );
  test_splitnamevalue( "  nm", "nm", "" );
  test_splitnamevalue( "  nm  ", "nm", "" );
  test_splitnamevalue( "  nm valu", "nm", "valu" );
  test_splitnamevalue( "  nm   value   ", "nm", "value" );
  test_splitnamevalue( "  nm  value is multiple words", "nm", "value is multiple words" );
  test_splitnamevalue( "  nm  value is multiple words\t ", "nm", "value is multiple words" );
}

void test_dqs( const std::string& in, const std::string& out )
{
  std::string tmp = in;
  Clib::decodequotedstring( tmp );
  if ( tmp != out )
  {
    INFO_PRINTLN( "decodequotedstring( {} ) fails!", in );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();

  Clib::encodequotedstring( tmp );
  if ( tmp != in )
  {
    INFO_PRINTLN( "encodequotedstring( {} ) fails!", out );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
}

void test_convertquotedstring()
{
  test_dqs( "\"hi\"", "hi" );
  test_dqs( "\"hi \"", "hi " );
  test_dqs( "\" hi \"", " hi " );
  test_dqs( "\" \\\"hi\"", " \"hi" );
}

void test_sanitizeUnicodeWithIso()
{
  std::string input;
  std::string output;
  std::string expected;

  input = "Some weird characters: \xC3 \xD0 \xA9.";
  output = std::string( input );
  expected = "Some weird characters: Ã Ð ©.";
  Clib::sanitizeUnicodeWithIso( &output );
  if ( output != expected )
  {
    INFO_PRINTLN(
        "sanitizeUnicodeWithIso fails!\n"
        "\tinput:    {}\n"
        "\toutput:   {}\n"
        "\texpected: {}",
        input, output, expected );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();

  input = "Maybe someone just wants to say \xC3\xA4. Well, that is probably an acceptable loss.";
  output = std::string( input );
  expected = "Maybe someone just wants to say ä. Well, that is probably an acceptable loss.";
  Clib::sanitizeUnicodeWithIso( &output );
  if ( output != expected )
  {
    INFO_PRINTLN(
        "sanitizeUnicodeWithIso fails!\n"
        "\tinput:    {}\n"
        "\toutput:   {}\n"
        "\texpected: {}",
        input, output, expected );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
}

void test_cp1252ToUtf8( const std::string& in, const std::string& expected )
{
  std::string converted = Clib::strCp1252ToUtf8( in );
  if ( converted != expected )
  {
    INFO_PRINTLN( "CP-1252 to UTF-8 conversion fails!" );
    UnitTest::inc_failures();
  }
  else
  {
    UnitTest::inc_successes();
  }
}

void test_utf8ToCp1252( const std::string& in, const std::string& expected )
{
  std::string converted = Clib::strUtf8ToCp1252( in );
  if ( converted != expected )
  {
    INFO_PRINTLN( "UTF-8 to CP-1252 conversion fails!" );
    UnitTest::inc_failures();
  }
  else
  {
    UnitTest::inc_successes();
  }
}

void test_encodingconversions()
{
  // All non-control characters in cp1252
  const unsigned char cp1252data[] = {
      0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
      0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e,
      0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d,
      0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c,
      0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b,
      0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a,
      0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a,
      0x8b, 0x8c, 0x8e, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c,
      0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac,
      0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb,
      0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca,
      0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9,
      0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8,
      0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7,
      0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff };

  // The same characters as above but encoded in UTF-8
  const unsigned char utf8data[] = {
      0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
      0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e,
      0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d,
      0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c,
      0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b,
      0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a,
      0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0xe2, 0x82, 0xac, 0xe2, 0x80, 0x9a, 0xc6, 0x92, 0xe2, 0x80,
      0x9e, 0xe2, 0x80, 0xa6, 0xe2, 0x80, 0xa0, 0xe2, 0x80, 0xa1, 0xcb, 0x86, 0xe2, 0x80, 0xb0,
      0xc5, 0xa0, 0xe2, 0x80, 0xb9, 0xc5, 0x92, 0xc5, 0xbd, 0xe2, 0x80, 0x98, 0xe2, 0x80, 0x99,
      0xe2, 0x80, 0x9c, 0xe2, 0x80, 0x9d, 0xe2, 0x80, 0xa2, 0xe2, 0x80, 0x93, 0xe2, 0x80, 0x94,
      0xcb, 0x9c, 0xe2, 0x84, 0xa2, 0xc5, 0xa1, 0xe2, 0x80, 0xba, 0xc5, 0x93, 0xc5, 0xbe, 0xc5,
      0xb8, 0xc2, 0xa0, 0xc2, 0xa1, 0xc2, 0xa2, 0xc2, 0xa3, 0xc2, 0xa4, 0xc2, 0xa5, 0xc2, 0xa6,
      0xc2, 0xa7, 0xc2, 0xa8, 0xc2, 0xa9, 0xc2, 0xaa, 0xc2, 0xab, 0xc2, 0xac, 0xc2, 0xad, 0xc2,
      0xae, 0xc2, 0xaf, 0xc2, 0xb0, 0xc2, 0xb1, 0xc2, 0xb2, 0xc2, 0xb3, 0xc2, 0xb4, 0xc2, 0xb5,
      0xc2, 0xb6, 0xc2, 0xb7, 0xc2, 0xb8, 0xc2, 0xb9, 0xc2, 0xba, 0xc2, 0xbb, 0xc2, 0xbc, 0xc2,
      0xbd, 0xc2, 0xbe, 0xc2, 0xbf, 0xc3, 0x80, 0xc3, 0x81, 0xc3, 0x82, 0xc3, 0x83, 0xc3, 0x84,
      0xc3, 0x85, 0xc3, 0x86, 0xc3, 0x87, 0xc3, 0x88, 0xc3, 0x89, 0xc3, 0x8a, 0xc3, 0x8b, 0xc3,
      0x8c, 0xc3, 0x8d, 0xc3, 0x8e, 0xc3, 0x8f, 0xc3, 0x90, 0xc3, 0x91, 0xc3, 0x92, 0xc3, 0x93,
      0xc3, 0x94, 0xc3, 0x95, 0xc3, 0x96, 0xc3, 0x97, 0xc3, 0x98, 0xc3, 0x99, 0xc3, 0x9a, 0xc3,
      0x9b, 0xc3, 0x9c, 0xc3, 0x9d, 0xc3, 0x9e, 0xc3, 0x9f, 0xc3, 0xa0, 0xc3, 0xa1, 0xc3, 0xa2,
      0xc3, 0xa3, 0xc3, 0xa4, 0xc3, 0xa5, 0xc3, 0xa6, 0xc3, 0xa7, 0xc3, 0xa8, 0xc3, 0xa9, 0xc3,
      0xaa, 0xc3, 0xab, 0xc3, 0xac, 0xc3, 0xad, 0xc3, 0xae, 0xc3, 0xaf, 0xc3, 0xb0, 0xc3, 0xb1,
      0xc3, 0xb2, 0xc3, 0xb3, 0xc3, 0xb4, 0xc3, 0xb5, 0xc3, 0xb6, 0xc3, 0xb7, 0xc3, 0xb8, 0xc3,
      0xb9, 0xc3, 0xba, 0xc3, 0xbb, 0xc3, 0xbc, 0xc3, 0xbd, 0xc3, 0xbe, 0xc3, 0xbf };

  std::string cp1252string( reinterpret_cast<const char*>( cp1252data ), sizeof( cp1252data ) );
  std::string utf8string( reinterpret_cast<const char*>( utf8data ), sizeof( utf8data ) );

  test_cp1252ToUtf8( cp1252string, utf8string );
  test_utf8ToCp1252( utf8string, cp1252string );
}

void test_curlfeatures()
{
  bool http{ false };
  bool https{ false };
  curl_version_info_data* data = curl_version_info( CURLVERSION_NOW );
  for ( int i = 0; data->protocols[i]; ++i )
  {
    INFO_PRINT( "{} ", data->protocols[i] );
    if ( std::string( data->protocols[i] ) == "https" )
      https = true;
    else if ( std::string( data->protocols[i] ) == "http" )
      http = true;
  }
  INFO_PRINTLN( "" );
  if ( !https || !http )
  {
    INFO_PRINTLN( "http(s) is not supported" );
    UnitTest::inc_failures();
  }
  else
    UnitTest::inc_successes();
}

void decay_test()
{
  for ( auto* r : Core::gamestate.Realms )
  {
    INFO_PRINTLN( "{} - {} - {}", r->name(), r->area(), r->gridarea() );
  }
  using namespace std::chrono_literals;
  auto item = Items::Item::create( 0x0eed );
  item->setposition( { 0, 0, 0, Core::gamestate.Realms[0] } );
  Core::add_item_to_world( item );
  item->set_decay_after( 1 );
  item = Items::Item::create( 0x0eed );
  item->setposition( { Core::gamestate.Realms[0]->area().se() - Core::Vec2d( 1, 1 ), 0,
                       Core::gamestate.Realms[0] } );
  Core::add_item_to_world( item );
  item->set_decay_after( 1 );
  if ( Core::gamestate.Realms[0]->toplevel_item_count() != 2 )
  {
    INFO_PRINTLN( "Toplevelcount 1!={}", Core::gamestate.Realms[0]->toplevel_item_count() );
    UnitTest::inc_failures();
    return;
  }
  Core::shift_clock_for_unittest( 2s );
  Core::Decay d;
  d.calculate_sleeptime();
  INFO_PRINTLN( "Sleep time {}", d.sleeptime );
  d.step();
  if ( Core::gamestate.Realms[0]->toplevel_item_count() != 1 )
  {
    INFO_PRINTLN( "Toplevelcount 0!={}", Core::gamestate.Realms[0]->toplevel_item_count() );
    INFO_PRINTLN( "active realm {}", d.realm_index );
    INFO_PRINTLN( "Area {} Pos {}", d.area, *d.area_itr );
    UnitTest::inc_failures();
    return;
  }
  auto area = d.area;
  for ( const auto& p : area )
  {
    (void)p;
    d.step();
  }
  INFO_PRINTLN( "active realm {}", d.realm_index );
  INFO_PRINTLN( "Area {} Pos {}", d.area, *d.area_itr );
  INFO_PRINTLN( "top {}", Core::gamestate.Realms[0]->toplevel_item_count() );
}
}  // namespace Testing
}  // namespace Pol
