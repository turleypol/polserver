#pragma once

#include <fmt/format.h>
#include <fmt/ostream.h>
#include <fstream>
#include <iosfwd>
#include <iterator>
#include <memory>
#include <string>
#include <type_traits>

namespace Pol::Clib
{
class StreamWriter
{
public:
  StreamWriter( std::ostream& stream );
  ~StreamWriter() noexcept( false );
  StreamWriter( const StreamWriter& ) = delete;
  StreamWriter& operator=( const StreamWriter& ) = delete;

  template <typename Str, typename T>
  void add( Str&& key, T&& value )
  {
    if constexpr ( !std::is_same<std::decay_t<T>, bool>::value )  // force bool to write as 0/1
    {
      fmt::format_to( std::back_inserter( _mbuff ), "\t{}\t{}\n", key, value );
    }
    else
      fmt::format_to( std::back_inserter( _mbuff ), "\t{}\t{:d}\n", key, value );
  }
  template <typename Str, typename... Args>
  void comment( Str&& format, Args&&... args )
  {
    static const std::string_view s{ "# " };
    _mbuff.append( s.data(), s.data() + s.size() );
    //    _stream << "# ";
    if constexpr ( sizeof...( args ) == 0 )
    {
      const std::string_view s1{ format };
      _mbuff.append( s1.data(), s1.data() + s1.size() );
    }
    else
      fmt::format_to( std::back_inserter( _mbuff ), format, args... );
    _mbuff.push_back( '\n' );
  }
  template <typename Str>
  void begin( Str&& key )
  {
    fmt::format_to( std::back_inserter( _mbuff ), "{}\n{{\n", key );
  }
  template <typename Str, typename StrValue>
  void begin( Str&& key, StrValue&& value )
  {
    fmt::format_to( std::back_inserter( _mbuff ), "{} {}\n{{\n", key, value );
  }
  void end()
  {
    fmt::format_to( std::back_inserter( _mbuff ), "{}", "}\n\n" );
    if ( _mbuff.size() > 5000 )
    {
      _stream << fmt::to_string( _mbuff );
      _mbuff.clear();
    }
  }
  void open_fstream( const std::string& filepath, std::ofstream& s );
  void flush_file();

protected:
  std::ostream& _stream;
  fmt::basic_memory_buffer<char, 5000> _mbuff;
  std::unique_ptr<char[]> _buf;
};

}  // namespace Pol::Clib
