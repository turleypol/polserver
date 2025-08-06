#include "SourceFile.h"

#include <cstring>
#include <filesystem>

#include "clib/filecont.h"
#include "clib/fileutil.h"
#include "clib/strutil.h"

#include "bscript/compiler/Report.h"
#include "bscript/compiler/file/SourceFileIdentifier.h"
#include "compilercfg.h"
#include <EscriptGrammar/EscriptParserVisitor.h>

using EscriptGrammar::EscriptLexer;
using EscriptGrammar::EscriptParser;
using EscriptGrammar::EscriptParserVisitor;

namespace fs = std::filesystem;

namespace Pol::Bscript::Compiler
{

SourceFile::SourceFile( const fs::path& path, const std::string& contents, Profile& profile )
    : path( path ),
      input( contents ),
      conformer( &input ),
      lexer( &conformer ),
      token_stream( &lexer ),
      parser( &token_stream ),
      error_listener( path, profile ),
      compilation_unit( nullptr ),
      module_unit( nullptr ),
      evaluate_unit( nullptr ),
      access_count( 0 )
{
  input.name = path.generic_string();

  lexer.removeErrorListeners();
  lexer.addErrorListener( &error_listener );
  parser.removeErrorListeners();
  parser.addErrorListener( &error_listener );

  parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(
      antlr4::atn::PredictionMode::SLL );
  parser.setErrorHandler( std::make_shared<antlr4::BailErrorStrategy>() );
}

SourceFile::~SourceFile() = default;

void SourceFile::propagate_errors_to( Report& report, const SourceFileIdentifier& ident )
{
  error_listener.propagate_errors_to( report, ident );
}

#if defined( _WIN32 ) || defined( __APPLE__ )
bool SourceFile::enforced_case_sensitivity_mismatch( const SourceLocation& referencing_location,
                                                     const fs::path& path, Report& report )
{
  // If the file does not exist, we cannot check for case sensitivity.
  if ( !fs::exists( path ) )
    return false;
  auto truename = fs::canonical( path ).filename().string();
  auto filepart = path.filename().string();
  if ( truename != filepart )
  {
    if ( compilercfg.ErrorOnFileCaseMissmatch )
    {
      report.error( referencing_location,
                    "Case mismatch: \n"
                    "  Specified:  {}\n"
                    "  Filesystem: {}",
                    filepart, truename );
      return true;
    }

    report.warning( referencing_location,
                    "Case mismatch: \n"
                    "  Specified:  {}\n"
                    "  Filesystem: {}",
                    filepart, truename );
  }
  return false;
}
#else
bool SourceFile::enforced_case_sensitivity_mismatch( const SourceLocation&, const fs::path&,
                                                     Report& )
{
  return false;
}
#endif

std::shared_ptr<SourceFile> SourceFile::load( const SourceFileIdentifier& ident, Profile& profile,
                                              Report& report )
{
  try
  {
    std::string contents( Clib::FileContents{ ident.path, true }.take() );

    Clib::sanitizeUnicodeWithIso( &contents );

    if ( is_web_script( ident.path ) )
    {
      contents = preprocess_web_script( contents );
    }

    return std::make_shared<SourceFile>( ident.path, contents, profile );
  }
  catch ( ... )
  {
    report.error( ident, "Unable to read file '{}'.", ident.path );
    return {};
  }
}

EscriptGrammar::EscriptParser::CompilationUnitContext* SourceFile::get_compilation_unit(
    Report& report, const SourceFileIdentifier& ident )
{
  if ( !compilation_unit )
  {
    std::lock_guard<std::mutex> guard( mutex );
    if ( !compilation_unit )
      compilation_unit = two_stage_parse<EscriptGrammar::EscriptParser::CompilationUnitContext>(
          [&] { return parser.compilationUnit(); } );
  }
  ++access_count;
  propagate_errors_to( report, ident );
  return compilation_unit;
}

EscriptGrammar::EscriptParser::ModuleUnitContext* SourceFile::get_module_unit(
    Report& report, const SourceFileIdentifier& ident )
{
  if ( !module_unit )
  {
    std::lock_guard<std::mutex> guard( mutex );
    if ( !module_unit )
      module_unit = two_stage_parse<EscriptGrammar::EscriptParser::ModuleUnitContext>(
          [&] { return parser.moduleUnit(); } );
  }
  ++access_count;
  propagate_errors_to( report, ident );
  return module_unit;
}

EscriptGrammar::EscriptParser::EvaluateUnitContext* SourceFile::get_evaluate_unit( Report& report )
{
  if ( !evaluate_unit )
  {
    std::lock_guard<std::mutex> guard( mutex );
    if ( !evaluate_unit )
      evaluate_unit = two_stage_parse<EscriptGrammar::EscriptParser::EvaluateUnitContext>(
          [&] { return parser.evaluateUnit(); } );
  }
  ++access_count;
  propagate_errors_to( report, SourceFileIdentifier( 0, "<eval>" ) );
  return evaluate_unit;
}

std::vector<antlr4::Token*> SourceFile::get_hidden_tokens_before( const Position& position )
{
  auto tokens = get_all_tokens();
  size_t token_index = 0;
  for ( const auto& token : tokens )
  {
    if ( token->getLine() == position.line_number &&
         token->getCharPositionInLine() + 1 <= position.character_column &&
         token->getCharPositionInLine() + 1 + token->getText().length() >=
             position.character_column )
    {
      break;
    }
    token_index++;
  }

  if ( token_index < tokens.size() )
  {
    return get_hidden_tokens_before( token_index );
  }

  return std::vector<antlr4::Token*>();
}

std::vector<antlr4::Token*> SourceFile::get_hidden_tokens_before( size_t tokenIndex )
{
  return token_stream.getHiddenTokensToLeft( tokenIndex );
}

antlr4::Token* SourceFile::get_token_at( const Position& position )
{
  auto tokens = get_all_tokens();
  auto result =
      std::find_if( tokens.begin(), tokens.end(),
                    [&]( const auto& token )
                    {
                      return token->getLine() == position.line_number &&
                             token->getCharPositionInLine() + 1 <= position.character_column &&
                             token->getCharPositionInLine() + 1 + token->getText().length() >=
                                 position.character_column;
                    } );
  if ( result != tokens.end() )
  {
    return *result;
  }
  return nullptr;
}

std::vector<antlr4::Token*> SourceFile::get_all_tokens()
{
  return token_stream.getTokens();
}

/**
 * Given a file name, tells if this is a web script
 */
bool SourceFile::is_web_script( const fs::path& file )
{
  auto ext = file.extension();
  return ext == ".hsr" || ext == ".asp";
}

/**
 * Transforms the raw html page into a script with a single WriteHtml() instruction
 */
std::string SourceFile::preprocess_web_script( const std::string& input )
{
  std::string output;
  output = "use http;";
  output += '\n';

  bool reading_html = true;
  bool source_is_emit = false;
  const char* s = input.c_str();
  std::string acc;
  while ( *s )
  {
    if ( reading_html )
    {
      if ( s[0] == '<' && s[1] == '%' )
      {
        reading_html = false;
        if ( !acc.empty() )
        {
          output += "WriteHtmlRaw( \"" + acc + "\");\n";
          acc = "";
        }
        s += 2;
        source_is_emit = ( s[0] == '=' );
        if ( source_is_emit )
        {
          output += "WriteHtmlRaw( ";
          ++s;
        }
      }
      else
      {
        if ( *s == '\"' )
          acc += "\\\"";
        else if ( *s == '\r' )
          ;
        else if ( *s == '\n' )
          acc += "\\n";
        else
          acc += *s;
        ++s;
      }
    }
    else
    {
      if ( s[0] == '%' && s[1] == '>' )
      {
        reading_html = true;
        s += 2;
        if ( source_is_emit )
          output += " );\n";
      }
      else
      {
        output += *s++;
      }
    }
  }
  if ( !acc.empty() )
    output += "WriteHtmlRaw( \"" + acc + "\");\n";
  return output;
}

// We do not need to switch between the BailErrorStrategy and
// DefaultErrorStrategy multiple times, as a SourceFile will only ever access
// _one_ specific unit function (`get_module_unit`, etc), which get cached once
// parsed. We try to parse with the SLL prediction mode first (set in the
// SourceFile constructor). If that fails, try the default LL parser. See
// https://github.com/antlr/antlr4/issues/374#issuecomment-30952357
template <typename T, typename Fn>
inline T* SourceFile::two_stage_parse( Fn callback )
{
  try
  {
    // SLL set in constructor
    return callback();
  }
  catch ( antlr4::RuntimeException& )
  {
    // Switch to (default) LL.
    token_stream.reset();
    parser.reset();
    parser.getInterpreter<antlr4::atn::ParserATNSimulator>()->setPredictionMode(
        antlr4::atn::PredictionMode::LL );
    parser.setErrorHandler( std::make_shared<antlr4::DefaultErrorStrategy>() );
    return callback();
  }
}

}  // namespace Pol::Bscript::Compiler
