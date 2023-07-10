#pragma once

#include <type_traits>

namespace Pol
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

  if constexpr ( std::is_signed_v<T> )
  {
    // Handle signed integral types separately
    using UnsignedT = std::make_unsigned_t<T>;
    return static_cast<T>( flipEndian( static_cast<UnsignedT>( value ) ) );
  }

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
  else
  {
    return value;
  }
}

}  // anonymous namespace

template <typename T>
[[nodiscard]] constexpr auto cfBEu16( T value )
{
  if constexpr ( std::is_unsigned_v<T> )
  {
    if constexpr ( std::is_constant_evaluated() )
    {
      static_assert( value >= std::numeric_limits<unsigned short>::min() &&
                         value <= std::numeric_limits<unsigned short>::max(),
                     "Value exceeds the range of unsigned short" );
    }
    else
    {
      static_assert( std::is_same_v<std::remove_cvref_t<T>, unsigned short>,
                     "T must be 'unsigned short'" );
    }
    return UseBigEndian ? static_cast<unsigned short>( value )
                        : flipEndian( static_cast<unsigned short>( value ) );
  }
  if constexpr ( std::is_signed_v<T> )
  {
    if constexpr ( std::is_constant_evaluated() )
    {
      static_assert(
          value >= std::numeric_limits<short>::min() && value <= std::numeric_limits<short>::max(),
          "Value exceeds the range of short" );
    }
    else
    {
      static_assert( std::is_same_v<std::remove_cvref_t<T>, short>, "T must be 'short'" );
    }
    return UseBigEndian ? static_cast<short>( value ) : flipEndian( static_cast<short>( value ) );
  }
}

template <typename T>
[[nodiscard]] constexpr auto cfBEu32( T value )
{
  if constexpr ( std::is_unsigned_v<T> )
  {
    static_assert(
        std::integral_constant<bool, ( value >= std::numeric_limits<unsigned int>::min() &&
                                       value <= std::numeric_limits<unsigned int>::max() )>::value,
        "Value exceeds the range of unsigned int" );

    return UseBigEndian ? static_cast<unsigned int>( value )
                        : flipEndian( static_cast<unsigned int>( value ) );
  }
  if constexpr ( std::is_signed_v<T> )
  {
    static_assert(
        std::integral_constant<bool, ( value >= std::numeric_limits<int>::min() &&
                                       value <= std::numeric_limits<int>::max() )>::value,
        "Value exceeds the range of int" );

    return UseBigEndian ? static_cast<int>( value ) : flipEndian( static_cast<int>( value ) );
  }
}

template <typename T>
[[nodiscard]] constexpr T cfLEu16( T value )
{
  return UseBigEndian ? flipEndian( value ) : value;
}

template <typename T>
[[nodiscard]] constexpr T cfLEu32( T value )
{
  return UseBigEndian ? flipEndian( value ) : value;
}

template <typename T>
[[nodiscard]] constexpr T cfLE( T value )
{
  return UseBigEndian ? flipEndian( value ) : value;
}

template <typename T>
[[nodiscard]] constexpr T cfBE( T value )
{
  return UseBigEndian ? value : flipEndian( value );
}

template <typename T>
[[nodiscard]] constexpr T ctLEu16( T value )
{
  return cfLEu16<T>( value );
}

template <typename T>
[[nodiscard]] constexpr T ctLEu32( T value )
{
  return cfLEu32<T>( value );
}

template <typename T>
[[nodiscard]] constexpr T ctBEu16( T value )
{
  return cfBEu16<T>( value );
}

template <typename T>
[[nodiscard]] constexpr T ctBEu32( T value )
{
  return cfBEu32<T>( value );
}
}  // namespace Pol

