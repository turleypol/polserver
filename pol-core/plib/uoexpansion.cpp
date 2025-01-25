#include "uoexpansion.h"

namespace Pol
{
namespace Plib
{
char* ExpansionNames[numExpansions] = { "T2A", "LBR", "AOS", "SE", "ML", "KR", "SA", "HSA" };
B9Feature ExpansionFlags[numExpansions] = { B9Feature::T2A, B9Feature::LBR, B9Feature::AOS,
                                            B9Feature::SE,  B9Feature::ML,  B9Feature::KRFaces,
                                            B9Feature::SA,  B9Feature::HSA };

static_assert( B9Feature::DefaultT2A == 0x1 );
static_assert( B9Feature::DefaultLBR == 0x2 );
static_assert( B9Feature::DefaultAOS == 0x801B );
static_assert( B9Feature::DefaultSE == 0x805B );
static_assert( B9Feature::DefaultML == 0x80DB );
static_assert( B9Feature::DefaultKR == 0x86DB );
static_assert( B9Feature::DefaultSA == 0x187DF );
static_assert( B9Feature::DefaultHSA == 0x387DF );
static_assert( B9Feature::DefaultTOL == 0x7387DF );

std::string getExpansionName( ExpansionVersion x )
{
  if ( x > ExpansionVersion::LastVersion )
    return "";

  return ExpansionNames[static_cast<u8>( x )];
}

ExpansionVersion getExpansionVersion( const std::string& str )
{
  for ( auto e = ExpansionVersion::T2A; e <= ExpansionVersion::LastVersion; ++e )
  {
    if ( str.find( ExpansionNames[e] ) != std::string::npos )
      return e;
  }
  return ExpansionVersion::T2A;
}
B9Feature getDefaultExpansionFlag( ExpansionVersion x )
{
  switch ( x )
  {
  case ExpansionVersion::T2A:
    return B9Feature::DefaultT2A;
  case ExpansionVersion::LBR:
    return B9Feature::DefaultLBR;
  case ExpansionVersion::AOS:
    return B9Feature::DefaultAOS;
  case ExpansionVersion::SE:
    return B9Feature::DefaultSE;
  case ExpansionVersion::ML:
    return B9Feature::DefaultML;
  case ExpansionVersion::KR:
    return B9Feature::DefaultKR;
  case ExpansionVersion::SA:
    return B9Feature::DefaultSA;
  case ExpansionVersion::HSA:
    return B9Feature::DefaultHSA;
  case ExpansionVersion::TOL:
    return B9Feature::DefaultTOL;
  }
  return B9Flags::DefaultT2A;
}
}  // namespace Plib
}  // namespace Pol
