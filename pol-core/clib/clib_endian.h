#pragma once

#include "rawtypes.h"
#include <type_traits>

namespace Pol::Clib
{

namespace
{

#ifdef U_BIG_ENDIAN
constexpr bool UseBigEndian = true;
#else
constexpr bool UseBigEndian = false;
#endif

template <typename T>
[[nodiscard]] constexpr T flipEndian( T value )
{
  static_assert( std::is_integral_v<T> && sizeof( T ) <= 8,
                 "flipEndian supports only integral types with size up to 8 bytes" );

  if constexpr ( sizeof( T ) == 2 )
  {
    return static_cast<T>( ( value >> 8 ) | ( value << 8 ) );
  }
  else if constexpr ( sizeof( T ) == 4 )
  {
    return static_cast<T>( ( value >> 24 ) | ( ( value >> 8 ) & 0xFF00 ) |
                           ( ( value << 8 ) & 0xFF0000 ) | ( value << 24 ) );
  }
  else if constexpr ( sizeof( T ) == 8 )
  {
    return static_cast<T>( ( value >> 56 ) | ( ( value >> 40 ) & 0xFF00 ) |
                           ( ( value >> 24 ) & 0xFF0000 ) | ( ( value >> 8 ) & 0xFF000000 ) |
                           ( ( value << 8 ) & 0xFF00000000 ) |
                           ( ( value << 24 ) & 0xFF0000000000 ) |
                           ( ( value << 40 ) & 0xFF000000000000 ) | ( value << 56 ) );
  }
  return value;
}

}  // anonymous namespace

template <typename T>
[[nodiscard]] constexpr std::enable_if_t<sizeof( T ) == 2 && std::is_unsigned_v<T>, T> cfLEu16(
    T value )
{
  return UseBigEndian ? value : flipEndian<T>( value );
}

template <typename T>
[[nodiscard]] constexpr std::enable_if_t<sizeof( T ) == 4 && std::is_unsigned_v<T>, T> cfLEu32(
    T value )
{
  return UseBigEndian ? value : flipEndian<T>( value );
}

template <typename T>
[[nodiscard]] constexpr std::enable_if_t<sizeof( T ) == 2 && std::is_unsigned_v<T>, T> cfBEu16(
    T value )
{
  return UseBigEndian ? flipEndian<T>( value ) : value;
}

template <typename T>
[[nodiscard]] constexpr std::enable_if_t<sizeof( T ) == 4 && std::is_unsigned_v<T>, T> cfBEu32(
    T value )
{
  return UseBigEndian ? flipEndian<T>( value ) : value;
}

template <typename T>
[[nodiscard]] constexpr T cfLE( T value )
{
  return UseBigEndian ? flipEndian<T>( value ) : value;
}

template <typename T>
[[nodiscard]] constexpr T cfBE( T value )
{
  return UseBigEndian ? value : flipEndian<T>( value );
}

// Aliases using statement
template <typename T>
using ctLEu16 = cfLEu16<T>;

template <typename T>
using ctLEu32 = cfLEu32<T>;

template <typename T>
using ctBEu32 = cfBEu32<T>;

template <typename T>
using ctBEu16 = cfBEu16<T>;

}  // namespace Pol::Clib

