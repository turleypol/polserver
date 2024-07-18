/** @file
 *
 * @par History
 *
 * @note ATTENTION
 * This header is part of the PCH
 * Remove the include in all StdAfx.h files or live with the consequences :)
 */


#pragma once

#include <cstring>
#include <map>
#include <set>
#include <sstream>
#include <unordered_set>
#include <vector>

namespace Pol::Clib
{
template <class T>
void delete_all( T& coll )
{
  while ( !coll.empty() )
  {
    delete coll.back();
    coll.pop_back();
  }
}

template <class D, class S>
inline D implicit_cast( const S& s )
{
  return s;  // fails unless S can be converted to D implicitly
}

template <class D, class S>
inline D explicit_cast( const S& s )
{
  return static_cast<D>( s );
}

inline int stringicmp( const std::string& str1, const std::string& str2 )
{
#ifdef _WIN32
  return _stricmp( str1.c_str(), str2.c_str() );
#else
  return strcasecmp( str1.c_str(), str2.c_str() );
#endif
}
inline int stringicmp( const std::string& str1, const char* str2 )
{
#ifdef _WIN32
  return _stricmp( str1.c_str(), str2 );
#else
  return strcasecmp( str1.c_str(), str2 );
#endif
}
inline int stringicmp( const char* str1, const std::string& str2 )
{
#ifdef _WIN32
  return _stricmp( str1, str2.c_str() );
#else
  return strcasecmp( str1, str2.c_str() );
#endif
}

#define ISTRINGSTREAM std::istringstream

#define OSTRINGSTREAM std::ostringstream
#define OSTRINGSTREAM_STR( x ) x.str()

template <class T, size_t N>
constexpr size_t arsize( T ( & )[N] )
{
  return N;
}

// Memory size estimation of std containers
template <typename T>
size_t memsize( const std::vector<T>& container )
{
  return 3 * sizeof( T* ) + container.capacity() * sizeof( T );
}
template <typename T>
size_t memsize( const std::set<T>& container )
{
  return 3 * sizeof( void* ) + container.size() * sizeof( T ) + 3 * sizeof( void* );
}
template <typename K, typename V, typename C>
size_t memsize( const std::map<K, V, C>& container )
{
  return ( sizeof( K ) + sizeof( V ) + ( sizeof( void* ) * 3 + 1 ) / 2 ) * container.size();
}
template <typename T>
size_t memsize( const std::unordered_set<T>& container )
{
  return 3 * sizeof( void* ) + container.size() * sizeof( T ) + 3 * sizeof( void* );
}
}  // namespace Pol::Clib

