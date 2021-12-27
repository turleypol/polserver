#include "ECompileMain.h"

#include <cstdio>
#include <exception>
#include <filesystem>
#include <iosfwd>
#include <memory>
#include <stdlib.h>
#include <string>
#include <time.h>

#include <format/format.h>

#include "bscript/compctx.h"
#include "bscript/compiler/Compiler.h"
#include "bscript/compiler/Profile.h"
#include "bscript/compiler/file/SourceFileCache.h"
#include "bscript/compilercfg.h"
#include "bscript/escriptv.h"
#include "bscript/executor.h"
#include "bscript/executortype.h"
#include "bscript/filefmt.h"
#include "clib/Program/ProgramConfig.h"
#include "clib/Program/ProgramMain.h"
#include "clib/esignal.h"
#include "clib/fileutil.h"
#include "clib/logfacility.h"
#include "clib/mdump.h"
#include "clib/passert.h"
#include "clib/threadhelp.h"
#include "clib/timer.h"
#include "plib/pkg.h"
#include "plib/systemstate.h"

namespace Pol
{
namespace ECompile
{
namespace fs = std::filesystem;
using namespace Pol::Core;
using namespace Pol::Plib;
using namespace Pol::Bscript;

///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////

ECompileMain::ECompileMain() : Pol::Clib::ProgramMain() {}
ECompileMain::~ECompileMain() {}
///////////////////////////////////////////////////////////////////////////////

void ECompileMain::showHelp()
{
  INFO_PRINT << "Usage:\n"
             << "    \n"
             << "  ECOMPILE [options] filespec [filespec ...]\n"
             << "    \n"
             << "  Output is : filespec.ecl\n"
             << "  Options:\n"
             << "   Options: \n"
             << "       -a           compile *.asp pages also\n"
             << "       -A           automatically compile scripts in main and enabled packages\n"
             << "       -Au          (as '-A' but only compile updated files)\n"
             << "       -b           keep building other scripts after errors\n"
             << "       -c           treat wrong capitalization in include directives as error\n"
             << "       -C cfgpath   path to configuration (replaces ecompile.cfg)\n"
             << "       -d           display confusing compiler parse information\n"
             << "       -D           write dependency information\n"
             << "       -e           report error on successful compilation (used for testing)\n"
#ifdef WIN32
             << "       -Ecfgpath    set or change the ECOMPILE_CFG_PATH evironment variable\n"
#endif

             << "       -i           include intrusive debug info in .ecl file\n"
             << "       -l           generate listfile\n"
             << "       -m           don't optimize object members\n"
#ifdef WIN32
             << "       -Pdir        set or change the EM and INC files Environment Variables\n"
#endif
             << "       -q           quiet mode (suppress normal output)\n"
             << "       -r [dir]     recurse folder [from 'dir'] (defaults to current folder)\n"
             << "       -ri [dir]    (as '-r' but only compile .inc files)\n"
             << "       -t[v]        show timing/profiling information [override quiet mode]\n"
             << "       -u           compile only updated scripts (.src newer than .ecl)\n"
             << "       -f           force compile even if up-to-date\n"
             << "       -s           display summary if -q is not set\n"
             << "       -T[N]        use threaded compilation, force N threads to run\n"
             << "       -vN          verbosity level\n"
             << "       -w           display warnings\n"
             << "       -y           treat warnings as errors\n"
             << "       -x           write external .dbg file\n"
             << "       -xt          write external .dbg.txt info file\n"
             << "\n"
             << " NOTE:\n"
             << "   If <filespec> are required after an empty -r[i] option, you MUST specify\n"
             << "   a literal [dir] of '.' (no quotes) or options will not parse correctly.\n";
}

static int s_argc;
static char** s_argv;

int debug = 0;
bool quiet = false;
bool keep_building = false;
bool force_update = false;
bool show_timing_details = false;
bool timing_quiet_override = false;
bool expect_compile_failure = false;
bool dont_optimize_object_members = false;
std::string EmPathEnv;   // "ECOMPILE_PATH_EM=xxx"
std::string IncPathEnv;  // ECOMPILE_PATH_INC=yyy"
std::string CfgPathEnv;  // ECOMPILE_CFG_PATH=zzz"

struct Summary
{
  unsigned UpToDateScripts = 0;
  unsigned CompiledScripts = 0;
  unsigned ScriptsWithCompileErrors = 0;
  size_t ThreadCount = 0;
  Compiler::Profile profile;
} summary;

struct Comparison
{
  std::atomic<long long> CompileTimeV1Micros{};
  std::atomic<long long> CompileTimeV2Micros{};
  std::atomic<long> MatchingResult{};
  std::atomic<long> NonMatchingResult{};
  std::atomic<long> MatchingOutput{};
  std::atomic<long> NonMatchingOutput{};
} comparison;

Compiler::SourceFileCache em_parse_tree_cache( summary.profile );
Compiler::SourceFileCache inc_parse_tree_cache( summary.profile );

std::unique_ptr<Compiler::Compiler> create_compiler()
{
  auto compiler = std::make_unique<Compiler::Compiler>( em_parse_tree_cache, inc_parse_tree_cache,
                                                        summary.profile );
  return compiler;
}

void compile_inc( const char* path )
{
  if ( !quiet )
    INFO_PRINT << "Compiling: " << path << "\n";

  std::unique_ptr<Compiler::Compiler> compiler = create_compiler();

  compiler->set_include_compile_mode();
  bool res = compiler->compile_file( path );

  if ( !res )
    throw std::runtime_error( "Error compiling file" );
}

std::vector<unsigned char> file_contents( const std::string& pathname, std::ios::openmode openmode )
{
  std::ifstream ifs( pathname, openmode );
  return std::vector<unsigned char>( std::istreambuf_iterator<char>( ifs ), {} );
}

std::vector<unsigned char> binary_contents( const std::string& pathname )
{
  std::ifstream input1( pathname, std::ios::binary );
  std::vector<unsigned char> buffer( std::istreambuf_iterator<char>( input1 ), {} );
  return buffer;
}

std::vector<std::string> instruction_filenames( const std::vector<unsigned>& ins_filenums,
                                                const std::vector<std::string>& filenames )
{
  std::vector<std::string> result;
  result.reserve( ins_filenums.size() );

  for ( auto& ins_filenum : ins_filenums )
  {
    result.push_back( filenames.at( ins_filenum ) );
  }
  return result;
}

/**
 * Compiles the single given file (inc, src, hsr, asp), if needed
 *
 * Takes into account compilercfg.OnlyCompileUpdatedScripts and force_update
 *
 * @param path path of the file to be compiled
 * @return TRUE if the file was compiled, FALSE otherwise (eg. the file is up-to-date)
 */
bool compile_file( const char* path )
{
  std::string fname( path );
  std::string filename_src = fname, ext( "" );

  std::string::size_type pos = fname.rfind( '.' );
  if ( pos != std::string::npos )
    ext = fname.substr( pos );

  if ( !ext.compare( ".inc" ) )
  {
    compile_inc( path );
    return true;
  }

  if ( ext.compare( ".src" ) != 0 && ext.compare( ".hsr" ) != 0 && ext.compare( ".asp" ) != 0 )
  {
    compiler_error( "Didn't find '.src', '.hsr', or '.asp' extension on source filename '", path,
                    "'!\n" );
    throw std::runtime_error( "Error in source filename" );
  }
  std::string filename_ecl = fname.replace( pos, 4, ".ecl" );
  std::string filename_lst = fname.replace( pos, 4, ".lst" );
  std::string filename_dep = fname.replace( pos, 4, ".dep" );
  std::string filename_dbg = fname.replace( pos, 4, ".dbg" );

  if ( compilercfg.OnlyCompileUpdatedScripts && !force_update )
  {
    bool all_old = true;
    unsigned int ecl_timestamp = Clib::GetFileTimestamp( filename_ecl.c_str() );
    if ( Clib::GetFileTimestamp( filename_src.c_str() ) >= ecl_timestamp )
    {
      if ( compilercfg.VerbosityLevel > 0 )
        INFO_PRINT << filename_src << " is newer than " << filename_ecl << "\n";
      all_old = false;
    }

    if ( all_old )
    {
      std::ifstream ifs( filename_dep.c_str() );
      // if the file doesn't exist, gotta build.
      if ( ifs.is_open() )
      {
        std::string depname;
        while ( getline( ifs, depname ) )
        {
          if ( Clib::GetFileTimestamp( depname.c_str() ) >= ecl_timestamp )
          {
            if ( compilercfg.VerbosityLevel > 0 )
              INFO_PRINT << depname << " is newer than " << filename_ecl << "\n";
            all_old = false;
            break;
          }
        }
      }
      else
      {
        if ( compilercfg.VerbosityLevel > 0 )
          INFO_PRINT << filename_dep << " does not exist."
                     << "\n";
        all_old = false;
      }
    }
    if ( all_old )
    {
      if ( !quiet && compilercfg.DisplayUpToDateScripts )
        INFO_PRINT << filename_ecl << " is up-to-date."
                   << "\n";
      return false;
    }
  }


  {
    if ( !quiet )
      INFO_PRINT << "Compiling: " << path << "\n";

    std::unique_ptr<Compiler::Compiler> compiler = create_compiler();

    bool success = compiler->compile_file( path );

    em_parse_tree_cache.keep_some();
    inc_parse_tree_cache.keep_some();

    if ( expect_compile_failure )
    {
      if ( !success )  // good, it failed
      {
        if ( !quiet )
          INFO_PRINT << "Compilation failed as expected."
                     << "\n";
        return true;
      }
      else
      {
        throw std::runtime_error( "Compilation succeeded (-e indicates failure was expected)" );
      }
    }

    if ( !success )
      throw std::runtime_error( "Error compiling file" );


    if ( !quiet )
      INFO_PRINT << "Writing:   " << filename_ecl << "\n";

    if ( !compiler->write_ecl( filename_ecl ) )
    {
      throw std::runtime_error( "Error writing output file" );
    }

    if ( compilercfg.GenerateListing )
    {
      if ( !quiet )
        INFO_PRINT << "Writing:   " << filename_lst << "\n";
      compiler->write_listing( filename_lst );
    }
    else if ( Clib::FileExists( filename_lst.c_str() ) )
    {
      if ( !quiet )
        INFO_PRINT << "Deleting:  " << filename_lst << "\n";
      Clib::RemoveFile( filename_lst );
    }

    if ( compilercfg.GenerateDebugInfo )
    {
      if ( !quiet )
      {
        INFO_PRINT << "Writing:   " << filename_dbg << "\n";
        if ( compilercfg.GenerateDebugTextInfo )
          INFO_PRINT << "Writing:   " << filename_dbg << ".txt"
                     << "\n";
      }
      compiler->write_dbg( filename_dbg, compilercfg.GenerateDebugTextInfo );
    }
    else if ( Clib::FileExists( filename_dbg.c_str() ) )
    {
      if ( !quiet )
        INFO_PRINT << "Deleting:  " << filename_dbg << "\n";
      Clib::RemoveFile( filename_dbg );
    }

    if ( compilercfg.GenerateDependencyInfo )
    {
      if ( !quiet )
        INFO_PRINT << "Writing:   " << filename_dep << "\n";
      compiler->write_included_filenames( filename_dep );
    }
    else if ( Clib::FileExists( filename_dep.c_str() ) )
    {
      if ( !quiet )
        INFO_PRINT << "Deleting:  " << filename_dep << "\n";
      Clib::RemoveFile( filename_dep );
    }
  }
  return true;
}

void compile_file_wrapper( const char* path )
{
  try
  {
    if ( compile_file( path ) )
      ++summary.CompiledScripts;
    else
      ++summary.UpToDateScripts;
  }
  catch ( std::exception& )
  {
    ++summary.CompiledScripts;
    ++summary.ScriptsWithCompileErrors;
    if ( !keep_building )
      throw;
  }
}

bool setting_value( const char* arg )
{
  // format of arg is -C or -C-
  if ( arg[2] == '\0' )
    return true;
  else if ( arg[2] == '-' )
    return false;
  else if ( arg[2] == '+' )
    return true;
  else
    return true;
}


int readargs( int argc, char** argv )
{
  bool unknown_opt = false;

  for ( int i = 1; i < argc; i++ )
  {
    const char* arg = argv[i];
#ifdef __linux__
    if ( arg[0] == '-' )
#else
    if ( arg[0] == '/' || arg[0] == '-' )
#endif
    {
      switch ( arg[1] )
      {
      case 'A':  // skip it at this point.
        break;

      case 'c':
        compilercfg.ErrorOnFileCaseMissmatch = setting_value( arg );
        break;

      case 'C':  // skip it at this point.
        ++i;     // and skip its parameter.
        break;

      case 'd':
        debug = 1;
        break;

      case 'D':
        compilercfg.GenerateDependencyInfo = setting_value( arg );
        break;

      case 'e':
        expect_compile_failure = true;
        break;

#ifdef WIN32
      case 'E':
      {
        std::string path = &argv[i][2];
        CfgPathEnv = "ECOMPILE_CFG_PATH=" + path;
        _putenv( CfgPathEnv.c_str() );
      }
      break;
#endif

      case 'g':
      {
        auto value = setting_value( arg );
        if ( !value )
        {
          INFO_PRINT << "The OG Compiler has been removed.\n";
          unknown_opt = true;
        }
        break;
      }

      case 'q':
        quiet = true;
        break;

      case 'w':
        compilercfg.DisplayWarnings = setting_value( arg );
        if ( argv[i][2] == 'P' )
          compilercfg.ParanoiaWarnings = true;
        break;
      case 'y':
        compilercfg.ErrorOnWarning = setting_value( arg );
        break;

      case 'l':
        compilercfg.GenerateListing = setting_value( arg );
        break;

      case 'i':
        include_debug = 1;
        break;

      case 'r':  // -r[i] [dir] is okay
        // Only suboption allowed is '-ri' (.inc recurse)
        if ( argv[i][2] && argv[i][2] != 'i' )
        {
          // BZZZZT! *error*
          unknown_opt = true;
          break;
        }

// Only skip next parameter if it's not an option!!
#ifdef __linux__
        if ( i + 1 < argc && argv[i + 1][0] != '-' )
#else
        if ( i + 1 < argc && argv[i + 1][0] != '/' && argv[i + 1][0] != '-' )
#endif
          ++i;
        break;

      case 't':
        show_timing_details = true;
        if ( argv[i][2] == 'v' )
          timing_quiet_override = true;
        break;

      case 's':
        // show_source = true;
        compilercfg.DisplaySummary = true;
        break;

      case 'a':
        compilercfg.CompileAspPages = setting_value( arg );
        break;

      case 'm':
        compilercfg.OptimizeObjectMembers = false;
        break;

      case 'b':
        keep_building = true;
        break;

      case 'u':
        compilercfg.OnlyCompileUpdatedScripts = setting_value( arg );
        if ( compilercfg.OnlyCompileUpdatedScripts )
          compilercfg.GenerateDependencyInfo = true;
        break;

      case 'f':
        force_update = true;
        break;

      case 'v':
        int vlev;
        vlev = atoi( &argv[i][2] );
        if ( !vlev )
          vlev = 1;
        compilercfg.VerbosityLevel = vlev;
        break;

      case 'x':
        compilercfg.GenerateDebugInfo = setting_value( arg );
        compilercfg.GenerateDebugTextInfo = ( argv[i][2] == 't' );
        break;

#ifdef WIN32
      case 'P':
      {
        std::string path = &argv[i][2];
        EmPathEnv = "ECOMPILE_PATH_EM=" + path;
        IncPathEnv = "ECOMPILE_PATH_INC=" + path;
        _putenv( EmPathEnv.c_str() );
        _putenv( IncPathEnv.c_str() );
      }
      break;
#endif
      case 'T':
      {
        compilercfg.ThreadedCompilation = true;
        int count = atoi( &argv[i][2] );
        compilercfg.NumberOfThreads = count;
        break;
      }
      default:
        unknown_opt = true;
        break;
      }
    }

    if ( unknown_opt )
    {
      ERROR_PRINT << "Unknown option: " << argv[i] << "\n";
      return 1;
    }
  }
  return 0;
}

void apply_configuration()
{
  em_parse_tree_cache.configure( compilercfg.EmParseTreeCacheSize );
  inc_parse_tree_cache.configure( compilercfg.IncParseTreeCacheSize );
}

/**
 * Recursively compile a folder
 *
 * @param basedir Path of the folder to recurse into
 * @param files
 */
void recurse_compile( const fs::path& basedir, std::vector<std::string>* files )
{
  int s_compiled, s_uptodate, s_errors;
  clock_t start, finish;

  if ( !fs::is_directory( basedir ) )
    return;

  s_compiled = s_uptodate = s_errors = 0;
  start = clock();
  for ( const auto& dir_entry : fs::directory_iterator( basedir ) )
  {
    INFO_PRINT << basedir.u8string() << " " << dir_entry.path().u8string() << "\n";
    if ( Clib::exit_signalled )
      return;
    if ( dir_entry.is_directory() )
      recurse_compile( dir_entry.path(), files );
    else if ( !dir_entry.is_regular_file() )
      continue;
    const auto ext = dir_entry.path().extension();
    if ( !ext.compare( ".src" ) || !ext.compare( ".hsr" ) ||
         ( compilercfg.CompileAspPages && !ext.compare( ".asp" ) ) )
    {
      ++s_compiled;
      if ( files == nullptr )
      {
        try
        {
          if ( compile_file( dir_entry.path().u8string().c_str() ) )
          {
            ++summary.CompiledScripts;
          }
          else
          {
            ++s_uptodate;
            ++summary.UpToDateScripts;
          }
        }
        catch ( std::exception& )
        {
          ++summary.CompiledScripts;
          ++summary.ScriptsWithCompileErrors;
          if ( !keep_building )
            throw;
          s_errors++;
        }
      }
      else
        files->push_back( dir_entry.path().u8string() );
    }
  }
  if ( files == nullptr )
    return;
  finish = clock();

  if ( ( !quiet || timing_quiet_override ) && show_timing_details && s_compiled > 0 &&
       files != nullptr )
  {
    INFO_PRINT << "Compiled " << s_compiled << " script" << ( s_compiled == 1 ? "" : "s" ) << " in "
               << basedir.u8string() << " in " << (int)( ( finish - start ) / CLOCKS_PER_SEC )
               << " second(s)\n";
    if ( s_uptodate > 0 )
      INFO_PRINT << "    " << s_uptodate << " script" << ( s_uptodate == 1 ? " was" : "s were" )
                 << " already up-to-date.\n";
    if ( s_errors > 0 )
      INFO_PRINT << "    " << s_errors << " script" << ( s_errors == 1 ? "" : "s" )
                 << " had errors.\n";
  }
}
void recurse_compile_inc( const fs::path& basedir, std::vector<std::string>* files )
{
  if ( !fs::is_directory( basedir ) )
    return;
  for ( const auto& dir_entry : fs::directory_iterator( basedir ) )
  {
    if ( Clib::exit_signalled )
      return;
    if ( dir_entry.is_directory() )
      recurse_compile_inc( dir_entry.path(), files );
    else if ( !dir_entry.is_regular_file() )
      continue;
    const auto ext = dir_entry.path().extension();

    if ( !ext.compare( ".inc" ) )
    {
      if ( files == nullptr )
        compile_file( dir_entry.path().u8string().c_str() );
      else
        files->push_back( dir_entry.path().u8string() );
    }
  }
}

void parallel_compile( const std::vector<std::string>& files )
{
  std::atomic<unsigned> compiled_scripts( 0 );
  std::atomic<unsigned> uptodate_scripts( 0 );
  std::atomic<unsigned> error_scripts( 0 );
  std::atomic<bool> par_keep_building( true );
  {
    unsigned int thread_count = std::max( 2u, std::thread::hardware_concurrency() * 2 );
    if ( compilercfg.NumberOfThreads )
      thread_count = static_cast<unsigned>( compilercfg.NumberOfThreads );
    threadhelp::TaskThreadPool pool( thread_count, "ecompile" );
    summary.ThreadCount = pool.size();
    for ( const auto& file : files )
    {
      pool.push(
          [&]()
          {
            if ( !par_keep_building || Clib::exit_signalled )
              return;
            try
            {
              if ( compile_file( file.c_str() ) )
                ++compiled_scripts;
              else
                ++uptodate_scripts;
            }
            catch ( std::exception& e )
            {
              ++compiled_scripts;
              ++error_scripts;
              compiler_error( "failed to compile ", file.c_str(), ": ", e.what(), "\n" );
              if ( !keep_building )
              {
                par_keep_building = false;
              }
            }
            catch ( ... )
            {
              par_keep_building = false;
              Clib::force_backtrace();
            }
          } );
    }
  }
  summary.CompiledScripts = compiled_scripts;
  summary.UpToDateScripts = uptodate_scripts;
  summary.ScriptsWithCompileErrors = error_scripts;
}


/**
 * Runs the compilation threads
 */
void AutoCompile()
{
  bool save = compilercfg.OnlyCompileUpdatedScripts;
  compilercfg.OnlyCompileUpdatedScripts = compilercfg.UpdateOnlyOnAutoCompile;
  if ( compilercfg.ThreadedCompilation )
  {
    std::vector<std::string> files;
    recurse_compile( fs::path( compilercfg.PolScriptRoot ), &files );
    for ( const auto& pkg : Plib::systemstate.packages )
    {
      recurse_compile( fs::path( pkg->dir() ), &files );
    }
    parallel_compile( files );
  }
  else
  {
    recurse_compile( fs::path( compilercfg.PolScriptRoot ), nullptr );
    for ( const auto& pkg : Plib::systemstate.packages )
    {
      recurse_compile( fs::path( pkg->dir() ), nullptr );
    }
  }
  compilercfg.OnlyCompileUpdatedScripts = save;
}

/**
 * Takes decisions, runs, the compilation, prints summary and cleans after
 */
bool run( int argc, char** argv, int* res )
{
  Clib::enable_exit_signaller();
  // Load and analyze the package structure
  for ( const auto& elem : compilercfg.PackageRoot )
  {
    Plib::load_packages( elem, true /* quiet */ );
  }
  Plib::replace_packages();
  Plib::check_package_deps();

  // Determine the run mode and do the compile itself
  Tools::Timer<> timer;
  bool any = false;

  for ( int i = 1; i < argc; i++ )
  {
#ifdef __linux__
    if ( argv[i][0] == '-' )
#else
    if ( argv[i][0] == '/' || argv[i][0] == '-' )
#endif
    {
      // -r[i] [<dir>]
      if ( argv[i][1] == 'A' )
      {
        compilercfg.UpdateOnlyOnAutoCompile = ( argv[i][2] == 'u' );
        any = true;

        AutoCompile();
      }
      else if ( argv[i][1] == 'r' )
      {
        any = true;
        std::string dir( "." );
        bool compile_inc = ( argv[i][2] == 'i' );  // compile .inc files

        ++i;
        if ( i < argc && argv[i] && argv[i][0] != '-' )
          dir.assign( argv[i] );

        if ( compilercfg.ThreadedCompilation )
        {
          std::vector<std::string> files;
          if ( compile_inc )
            recurse_compile_inc( fs::path( dir ), &files );
          else
            recurse_compile( fs::path( dir ), &files );
          parallel_compile( files );
        }
        else
        {
          if ( compile_inc )
            recurse_compile_inc( fs::path( dir ), nullptr );
          else
            recurse_compile( fs::path( dir ), nullptr );
        }
      }
      else if ( argv[i][1] == 'C' )
      {
        ++i;  // skip the config file pathname
      }
      // and skip any other option.
    }
    else
    {
      any = true;
#ifdef _WIN32
      Clib::forspec( argv[i], compile_file_wrapper );
#else
      compile_file_wrapper( argv[i] );
#endif
    }
  }

  if ( !any && compilercfg.AutoCompileByDefault )
  {
    any = true;
    AutoCompile();
  }

  // Execution is completed: start final/cleanup tasks
  timer.stop();

  Plib::systemstate.deinitialize();

  if ( any && compilercfg.DisplaySummary && !quiet )
  {
    fmt::Writer tmp;
    tmp << "Compilation Summary:\n";
    if ( summary.ThreadCount )
      tmp << "    Used " << summary.ThreadCount << " threads\n";
    if ( summary.CompiledScripts )
      tmp << "    Compiled " << summary.CompiledScripts << " script"
          << ( summary.CompiledScripts == 1 ? "" : "s" ) << " in " << timer.ellapsed() << " ms.\n";

    if ( summary.ScriptsWithCompileErrors )
      tmp << "    " << summary.ScriptsWithCompileErrors << " of those script"
          << ( summary.ScriptsWithCompileErrors == 1 ? "" : "s" ) << " had errors.\n";

    if ( summary.UpToDateScripts )
      tmp << "    " << summary.UpToDateScripts << " script"
          << ( summary.UpToDateScripts == 1 ? " was" : "s were" ) << " already up-to-date.\n";

    if ( show_timing_details )
    {
      tmp << "    build workspace: " << (long long)summary.profile.build_workspace_micros / 1000
          << "\n";
      tmp << "        - load *.em:   " << (long long)summary.profile.load_em_micros / 1000 << "\n";
      tmp << "       - parse *.em:   " << (long long)summary.profile.parse_em_micros / 1000 << " ("
          << (long)summary.profile.parse_em_count << ")\n";
      tmp << "         - ast *.em:   " << (long long)summary.profile.ast_em_micros / 1000 << "\n";
      tmp << "      - parse *.inc:   " << (long long)summary.profile.parse_inc_micros / 1000 << " ("
          << (long)summary.profile.parse_inc_count << ")\n";
      tmp << "        - ast *.inc:   " << (long long)summary.profile.ast_inc_micros / 1000 << "\n";
      tmp << "      - parse *.src:   " << (long long)summary.profile.parse_src_micros / 1000 << " ("
          << (long)summary.profile.parse_src_count << ")\n";
      tmp << "        - ast *.src:   " << (long long)summary.profile.ast_src_micros / 1000 << "\n";
      tmp << "  resolve functions:   "
          << (long long)summary.profile.ast_resolve_functions_micros / 1000 << "\n";
      tmp << " register constants: "
          << (long long)summary.profile.register_const_declarations_micros / 1000 << "\n";
      tmp << "            analyze: " << (long long)summary.profile.analyze_micros / 1000 << "\n";
      tmp << "           optimize: " << (long long)summary.profile.optimize_micros / 1000 << "\n";
      tmp << "       disambiguate: " << (long long)summary.profile.disambiguate_micros / 1000
          << "\n";
      tmp << "      generate code: " << (long long)summary.profile.codegen_micros / 1000 << "\n";
      tmp << "  prune cache (sel): " << (long long)summary.profile.prune_cache_select_micros / 1000
          << "\n";
      tmp << "  prune cache (del): " << (long long)summary.profile.prune_cache_delete_micros / 1000
          << "\n";
      tmp << "\n";
      tmp << "      - ambiguities: " << (long)summary.profile.ambiguities << "\n";
      tmp << "       - cache hits: " << (long)summary.profile.cache_hits << "\n";
      tmp << "     - cache misses: " << (long)summary.profile.cache_misses << "\n";

      INFO_PRINT << tmp.str();
    }
  }

  if ( summary.ScriptsWithCompileErrors )
    *res = 1;
  else
    *res = 0;
  return any;
}

void read_config_file( int argc, char* argv[] )
{
  for ( int i = 1; i < argc; i++ )
  {
    if ( argv[i][0] == '/' || argv[i][0] == '-' )
    {
      // -C cfgpath
      if ( argv[i][1] == 'C' )
      {
        ++i;
        if ( i == argc )
          throw std::runtime_error( "-C specified without pathname" );

        compilercfg.Read( std::string( argv[i] ) );
        return;
      }
    }
  }

  // check ECOMPILE_CFG_PATH environment variable
  const char* env_ecompile_cfg_path = getenv( "ECOMPILE_CFG_PATH" );
  if ( env_ecompile_cfg_path != nullptr )
  {
    compilercfg.Read( std::string( env_ecompile_cfg_path ) );
    return;
  }

  // no -C arg, so use binary path (hope it's right..sigh.)
  std::string cfgpath = PROG_CONFIG::programDir() + "ecompile.cfg";
  if ( Clib::FileExists( "ecompile.cfg" ) )
  {
    compilercfg.Read( "ecompile.cfg" );
  }
  else if ( Clib::FileExists( cfgpath ) )
  {
    compilercfg.Read( cfgpath );
  }
  else
  {
    ERROR_PRINT << "Could not find " << cfgpath << "; using defaults.\n";
    compilercfg.SetDefaults();
  }
}

/**
 * This is the main entry point for ecompile program
 */
int ECompileMain::main()
{
  Clib::Logging::global_logger->disableFileLog();

  const std::vector<std::string>& binArgs = programArgs();

  /**********************************************
   * show help
   **********************************************/
  if ( binArgs.size() == 1 )
  {
    showHelp();
    return 0;  // return "okay"
  }

/**********************************************
 * TODO: rework the following cruft from former uotool.cpp
 **********************************************/
#ifdef _WIN32
  Clib::MiniDumper::Initialize();
#endif

  ECompile::read_config_file( s_argc, s_argv );

  int res = ECompile::readargs( s_argc, s_argv );
  if ( res )
  {
    showHelp();
    return res;
  }

  ECompile::apply_configuration();

  if ( !ECompile::quiet )
  {
    // vX.YY
    double vernum = (double)1 + (double)( ESCRIPT_FILE_VER_CURRENT / 100.0f );
    INFO_PRINT << "EScript Compiler v" << vernum << "\n" << POL_COPYRIGHT << "\n\n";
  }

  int prog_res = 1;
  bool didanything = ECompile::run( s_argc, s_argv, &prog_res );

  if ( !didanything )
  {
    showHelp();
    return 1;
  }
  return prog_res;
}
}  // namespace ECompile
}  // namespace Pol

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

int main( int argc, char* argv[] )
{
  Pol::ECompile::s_argc = argc;
  Pol::ECompile::s_argv = argv;

  Pol::ECompile::ECompileMain* ECompileMain = new Pol::ECompile::ECompileMain();
  ECompileMain->start( argc, argv );
}
