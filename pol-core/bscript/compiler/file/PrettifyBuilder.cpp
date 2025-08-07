#include "PrettifyBuilder.h"

#include "bscript/compiler/Profile.h"
#include "bscript/compiler/Report.h"
#include "bscript/compiler/file/PrettifyFileProcessor.h"
#include "bscript/compiler/file/SourceFile.h"
#include "bscript/compiler/file/SourceFileIdentifier.h"
#include "bscript/compiler/file/SourceLocation.h"

#include <fmt/std.h>

namespace Pol::Bscript::Compiler
{
PrettifyBuilder::PrettifyBuilder( Profile& profile, Report& report )
    : profile( profile ), report( report )
{
}

std::string PrettifyBuilder::build( const std::filesystem::path& path, bool is_module )
{
  auto ident = std::make_unique<SourceFileIdentifier>( 0, path );

  SourceLocation source_location( ident.get(), 0, 0 );

  auto sf = SourceFile::load( *ident, profile, report );

  if ( !sf || report.error_count() )
  {
    report.error( *ident, "Unable to load '{}'.", path );
    return {};
  }
  PrettifyFileProcessor prettify_processor( *ident, profile, report );
  if ( is_module )
    prettify_processor.process_module_unit( *sf );
  else
    prettify_processor.process_compilation_unit( *sf );

  if ( report.error_count() )
    return {};
  return prettify_processor.prettify();
}

}  // namespace Pol::Bscript::Compiler
