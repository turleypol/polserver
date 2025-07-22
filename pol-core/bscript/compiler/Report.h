#ifndef POLSERVER_REPORT_H
#define POLSERVER_REPORT_H


#include "bscript/compiler/ast/Node.h"

namespace Pol::Bscript::Compiler
{
class SourceLocation;

class Report
{
public:
  explicit Report( bool display_warnings, bool display_errors = true, bool display_debug = false );
  Report( const Report& ) = delete;
  Report& operator=( const Report& ) = delete;

  template <typename Str, typename... Args>
  inline void error( const SourceLocation& source_location, Str&& format, Args&&... args )
  {
    ++errors;
    if ( display_errors )
    {
      auto msg = fmt::format( fmt::runtime( format ), std::forward<Args>( args )... );
      ERROR_PRINTLN( "{}: error: {}", source_location, msg );
    }
  }

  template <typename Str, typename... Args>
  inline void error( const SourceFileIdentifier& ident, Str&& format, Args&&... args )
  {
    SourceLocation loc( &ident, 0, 0 );
    error( loc, std::forward<Str>( format ), std::forward<Args>( args )... );
  }

  template <typename Str, typename... Args>
  inline void error( const Node& node, Str&& format, Args&&... args )
  {
    error( node.source_location, std::forward<Str>( format ), std::forward<Args>( args )... );
  }

  // Report.fatal: use this when it's not possible to continue after a user-facing error.
  //
  template <typename Str, typename... Args>
  [[noreturn]] inline void fatal( const SourceLocation& source_location, Str const& format,
                                  Args&&... args )
  {
    auto msg = fmt::format( fmt::runtime( format ), args... );
    ERROR_PRINTLN( "{}: error: {}", source_location, msg );
    throw std::runtime_error( msg.c_str() );
  }

  template <typename Str, typename... Args>
  inline void warning( const SourceLocation& source_location, Str const& format, Args&&... args )
  {
    ++warnings;
    if ( display_warnings )
    {
      auto msg = fmt::format( fmt::runtime( format ), args... );
      ERROR_PRINTLN( "{}: warning: {}", source_location, msg );
    }
  }

  template <typename Str, typename... Args>
  inline void warning( const Node& node, Str const& format, Args&&... args )
  {
    warning( node.source_location, format, args... );
  }

  template <typename Str, typename... Args>
  inline void debug( const SourceLocation& source_location, Str const& format, Args&&... args )
  {
    if ( display_debugs )
    {
      auto msg = fmt::format( fmt::runtime( format ), args... );
      ERROR_PRINTLN( "{}: debug: {}", source_location, msg );
    }
  }

  template <typename Str, typename... Args>
  inline void debug( const Node& node, Str const& format, Args&&... args )
  {
    debug( node.source_location, format, args... );
  }

  [[nodiscard]] unsigned error_count() const;
  [[nodiscard]] unsigned warning_count() const;

  void reset();

private:
  const bool display_warnings;
  const bool display_errors;
  const bool display_debugs;
  unsigned errors;
  unsigned warnings;
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_REPORT_H
