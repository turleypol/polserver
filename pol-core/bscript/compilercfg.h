#pragma once

#include <filesystem>
#include <string>
#include <vector>

namespace Pol::Bscript
{
struct CompilerConfig
{
  std::vector<std::filesystem::path> PackageRoot;
  std::filesystem::path IncludeDirectory;
  std::filesystem::path ModuleDirectory;
  std::filesystem::path PolScriptRoot;
  bool GenerateListing;
  bool GenerateDebugInfo;
  bool GenerateDebugTextInfo;
  bool GenerateAbstractSyntaxTree;
  int VerbosityLevel;
  bool DisplayWarnings;
  bool DisplayDebugs;
  bool GenerateDependencyInfo;
  bool CompileAspPages;
  bool AutoCompileByDefault;
  bool UpdateOnlyOnAutoCompile;
  bool OnlyCompileUpdatedScripts;
  bool WatchModeByDefault;
  bool DisplaySummary;
  bool DisplayUpToDateScripts;
  bool OptimizeObjectMembers;
  bool ErrorOnWarning;
  bool ThreadedCompilation;
  int NumberOfThreads;
  bool ParanoiaWarnings;
  bool ErrorOnFileCaseMissmatch;
  int EmParseTreeCacheSize;
  int IncParseTreeCacheSize;

  bool ShortCircuitEvaluation = false;
  bool ShortCircuitEvaluationWarning = true;

  // Formatter
  size_t FormatterLineWidth = 100;
  bool FormatterKeepKeywords = false;
  unsigned short FormatterIndentLevel = 2;
  bool FormatterMergeEmptyLines = true;
  bool FormatterEmptyParenthesisSpacing = false;
  bool FormatterEmptyBracketSpacing = false;
  bool FormatterConditionalParenthesisSpacing = true;
  bool FormatterParenthesisSpacing = true;
  bool FormatterBracketSpacing = true;
  bool FormatterDelimiterSpacing = true;
  bool FormatterAssignmentSpacing = true;
  bool FormatterComparisonSpacing = true;
  bool FormatterEllipsisSpacing = false;
  bool FormatterOperatorSpacing = true;
  bool FormatterWindowsLineEndings = false;
  bool FormatterUseTabs = false;
  unsigned short FormatterTabWidth = 4;
  bool FormatterInsertNewlineAtEOF = true;
  bool FormatterFormatInsideComments = true;
  bool FormatterBracketAttachToType = true;
  bool FormatterAlignTrailingComments = true;
  bool FormatterAlignConsecutiveShortCaseStatements = true;
  bool FormatterAllowShortCaseLabelsOnASingleLine = true;
  bool FormatterAllowShortFuncRefsOnASingleLine = true;

  void Read( const std::filesystem::path& path );
  void SetDefaults();
};

extern CompilerConfig compilercfg;
}  // namespace Pol::Bscript
