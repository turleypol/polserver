#ifndef POLSERVER_COMPILER_H
#define POLSERVER_COMPILER_H

#include <filesystem>
#include <memory>
#include <string>

#include "bscript/compiler/model/UserFunctionInclusion.h"

namespace Pol::Bscript::Compiler
{
class CompiledScript;
class CompilerWorkspace;
class SourceFileCache;
class Profile;
class Report;

class Compiler
{
public:
  Compiler( SourceFileCache& em_cache, SourceFileCache& inc_cache, Profile& );
  ~Compiler();
  Compiler( const Compiler& ) = delete;
  Compiler& operator=( const Compiler& ) = delete;

  bool compile_file( const std::filesystem::path& path );
  bool write_ecl( const std::filesystem::path& path );
  void write_listing( const std::filesystem::path& path );
  void write_string_tree( const std::filesystem::path& path );
  void write_dbg( const std::filesystem::path& path, bool include_debug_text );
  void write_included_filenames( const std::filesystem::path& path );
  void set_include_compile_mode();

  void compile_file_steps( const std::filesystem::path& path, Report& );
  bool format_file( const std::filesystem::path& path, bool is_module, bool inplace );
  unsigned warnings_count() const;

private:
  std::unique_ptr<CompilerWorkspace> build_workspace( const std::filesystem::path&, Report& );
  void register_constants( CompilerWorkspace&, Report& );
  void optimize( CompilerWorkspace&, Report& );
  void disambiguate( CompilerWorkspace&, Report& );
  void analyze( CompilerWorkspace&, Report& );
  void check_short_circuit( CompilerWorkspace&, Report& );
  std::unique_ptr<CompiledScript> generate( std::unique_ptr<CompilerWorkspace>, Report& );

  void display_outcome( const std::filesystem::path& path, Report& );

  SourceFileCache& em_cache;
  SourceFileCache& inc_cache;
  Profile& profile;
  std::unique_ptr<CompiledScript> output;
  UserFunctionInclusion user_function_inclusion = UserFunctionInclusion::ReferencedOnly;
  unsigned warnings = 0;
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_COMPILER_H
