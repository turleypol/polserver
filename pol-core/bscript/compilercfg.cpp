#include "compilercfg.h"

#include <ranges>
#include <stdlib.h>

#include "../clib/Program/ProgramConfig.h"
#include "../clib/cfgelem.h"
#include "../clib/cfgfile.h"

namespace Pol::Bscript
{
namespace fs = std::filesystem;
void CompilerConfig::Read( const fs::path& path )
{
#ifdef _WIN32
  bool win_platform = true;
#else
  bool win_platform = false;
#endif

  Clib::ConfigFile cf( path );
  Clib::ConfigElem elem;
  cf.readraw( elem );

  PackageRoot.clear();
  IncludeDirectory.clear();

  std::string tmp;
  while ( elem.remove_prop( "PackageRoot", &tmp ) )
  {
    PackageRoot.push_back( fs::path{ tmp }.lexically_normal() );
  }
  if ( elem.remove_prop( "IncludeDirectory", &tmp ) )
  {
    IncludeDirectory = fs::path{ tmp }.lexically_normal();
  }
  ModuleDirectory = fs::path{ elem.remove_string( "ModuleDirectory" ) }.lexically_normal();
  PolScriptRoot = fs::path{ elem.remove_string( "PolScriptRoot" ) }.lexically_normal();
  GenerateListing = elem.remove_bool( "GenerateListing", false );
  GenerateDebugInfo = elem.remove_bool( "GenerateDebugInfo", false );
  GenerateDebugTextInfo = elem.remove_bool( "GenerateDebugTextInfo", false );
  GenerateAbstractSyntaxTree = elem.remove_bool( "GenerateAbstractSyntaxTree", false );

  VerbosityLevel = elem.remove_int( "VerbosityLevel", 0 );
  DisplayWarnings = elem.remove_bool( "DisplayWarnings", false );
  CompileAspPages = elem.remove_bool( "CompileAspPages", false );
  AutoCompileByDefault = elem.remove_bool( "AutoCompileByDefault", false );
  UpdateOnlyOnAutoCompile = elem.remove_bool( "UpdateOnlyOnAutoCompile", false );
  OnlyCompileUpdatedScripts = elem.remove_bool( "OnlyCompileUpdatedScripts", false );
  WatchModeByDefault = elem.remove_bool( "WatchModeByDefault", false );
  DisplaySummary = elem.remove_bool( "DisplaySummary", false );
  OptimizeObjectMembers = elem.remove_bool( "OptimizeObjectMembers", true );
  ErrorOnWarning = elem.remove_bool( "ErrorOnWarning", false );
  GenerateDependencyInfo = elem.remove_bool( "GenerateDependencyInfo", OnlyCompileUpdatedScripts );

  DisplayUpToDateScripts = elem.remove_bool( "DisplayUpToDateScripts", true );
  ThreadedCompilation = elem.remove_bool( "ThreadedCompilation", false );
  NumberOfThreads = elem.remove_int( "NumberOfThreads", 0 );
  ParanoiaWarnings = elem.remove_bool( "ParanoiaWarnings", false );
  ErrorOnFileCaseMissmatch = elem.remove_bool( "ErrorOnFileCaseMissmatch", false );

  EmParseTreeCacheSize = elem.remove_int( "EmParseTreeCacheSize", 25 );
  IncParseTreeCacheSize = elem.remove_int( "IncParseTreeCacheSize", 50 );

  ShortCircuitEvaluation = elem.remove_bool( "ShortCircuitEvaluation", false );
  ShortCircuitEvaluationWarning = elem.remove_bool( "ShortCircuitEvaluationWarning", true );

  FormatterLineWidth = elem.remove_unsigned( "FormatterLineWidth", 100 );
  FormatterKeepKeywords = elem.remove_bool( "FormatterKeepKeywords", false );
  FormatterIndentLevel = elem.remove_ushort( "FormatterIndentLevel", 2 );
  FormatterMergeEmptyLines = elem.remove_bool( "FormatterMergeEmptyLines", true );
  FormatterEmptyParenthesisSpacing = elem.remove_bool( "FormatterEmptyParenthesisSpacing", false );
  FormatterEmptyBracketSpacing = elem.remove_bool( "FormatterEmptyBracketSpacing", false );
  FormatterConditionalParenthesisSpacing =
      elem.remove_bool( "FormatterConditionalParenthesisSpacing", true );
  FormatterParenthesisSpacing = elem.remove_bool( "FormatterParenthesisSpacing", true );
  FormatterBracketSpacing = elem.remove_bool( "FormatterBracketSpacing", true );
  FormatterDelimiterSpacing = elem.remove_bool( "FormatterDelimiterSpacing", true );
  FormatterAssignmentSpacing = elem.remove_bool( "FormatterAssignmentSpacing", true );
  FormatterComparisonSpacing = elem.remove_bool( "FormatterComparisonSpacing", true );
  FormatterEllipsisSpacing = elem.remove_bool( "FormatterEllipsisSpacing", false );
  FormatterOperatorSpacing = elem.remove_bool( "FormatterOperatorSpacing", true );
  FormatterWindowsLineEndings = elem.remove_bool( "FormatterWindowsLineEndings", win_platform );
  FormatterUseTabs = elem.remove_bool( "FormatterUseTabs", false );
  FormatterTabWidth = elem.remove_ushort( "FormatterTabWidth", 4 );
  FormatterInsertNewlineAtEOF = elem.remove_bool( "FormatterInsertNewlineAtEOF", true );
  FormatterFormatInsideComments = elem.remove_bool( "FormatterFormatInsideComments", true );
  FormatterBracketAttachToType = elem.remove_bool( "FormatterBracketAttachToType", true );
  FormatterAlignTrailingComments = elem.remove_bool( "FormatterAlignTrailingComments", true );
  FormatterAlignConsecutiveShortCaseStatements =
      elem.remove_bool( "FormatterAlignConsecutiveShortCaseStatements", true );
  FormatterAllowShortCaseLabelsOnASingleLine =
      elem.remove_bool( "FormatterAllowShortCaseLabelsOnASingleLine", true );
  FormatterAllowShortFuncRefsOnASingleLine =
      elem.remove_bool( "FormatterAllowShortFuncRefsOnASingleLine", true );


// This is where we TRY to validate full paths from what was provided in the
// ecompile.cfg.
// On Windows ecompile.exe is expected to be located in scripts/
#ifdef WIN32
  fs::path MyPath{ path };
  // If it's just "ecompile.cfg", let's change it to the exe's path which it SHOULD be
  // with.
  if ( !MyPath.has_parent_path() )
  {
    // Let's find the NEXT-TO-LAST / in the path, and remove from there on. Oh yay!
    // To bad we can't just force everyone to use ABSOLUTE PATHS NANDO. :o
    MyPath = PROG_CONFIG::programDir();
    // from root/scripts/ to root/
    if ( !MyPath.has_filename() )
      MyPath = MyPath.parent_path();  // remove trailing /
    MyPath = MyPath.parent_path();
  }

  if ( !IncludeDirectory.is_absolute() )
    IncludeDirectory = ( MyPath / IncludeDirectory ).lexically_normal();
  if ( !ModuleDirectory.is_absolute() )
    ModuleDirectory = ( MyPath / ModuleDirectory ).lexically_normal();
  if ( !PolScriptRoot.is_absolute() )
    PolScriptRoot = ( MyPath / PolScriptRoot ).lexically_normal();
  std::ranges::transform( PackageRoot, PackageRoot.begin(),
                          [&MyPath]( const fs::path& pr )
                          {
                            if ( pr.is_absolute() )
                              return pr;
                            return ( MyPath / pr ).lexically_normal();
                          } );
#else  // on Linux ecompile can be everywhere it only depends on the current working directory
  if ( !IncludeDirectory.is_absolute() )
    IncludeDirectory = fs::absolute( IncludeDirectory ).lexically_normal();
  if ( !ModuleDirectory.is_absolute() )
    ModuleDirectory = fs::absolute( ModuleDirectory ).lexically_normal();
  if ( !PolScriptRoot.is_absolute() )
    PolScriptRoot = fs::absolute( PolScriptRoot ).lexically_normal();
  std::ranges::transform( PackageRoot, PackageRoot.begin(),
                          []( const fs::path& pr )
                          {
                            if ( pr.is_absolute() )
                              return pr;
                            return fs::absolute( pr ).lexically_normal();
                          } );
#endif
}

void CompilerConfig::SetDefaults()
{
  const char* tmp;

  tmp = getenv( "ECOMPILE_PATH_EM" );
  ModuleDirectory = tmp ? fs::path{ tmp }.lexically_normal() : PROG_CONFIG::programDir();

  tmp = getenv( "ECOMPILE_PATH_INC" );
  IncludeDirectory = tmp ? fs::path{ tmp }.lexically_normal() : PROG_CONFIG::programDir();

  PolScriptRoot = IncludeDirectory;

  DisplayUpToDateScripts = true;

  EmParseTreeCacheSize = 25;
  IncParseTreeCacheSize = 50;
}

CompilerConfig compilercfg;
}  // namespace Pol::Bscript
