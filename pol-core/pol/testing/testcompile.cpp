
#include "clib/logfacility.h"
#include "clib/rawtypes.h"

#include "bscript/compctx.h"
#include "bscript/compiler/Compiler.h"
#include "bscript/compiler/Profile.h"
#include "bscript/compiler/Report.h"
#include "bscript/compiler/file/SourceFileCache.h"
#include "bscript/compiler/file/SourceFileLoader.h"
#include "testenv.h"
namespace Pol
{
namespace Testing
{
using namespace Bscript;

void ast_test()
{
  Compiler::Profile profile;
  Compiler::SourceFileLoader source_loader;
  Compiler::SourceFileCache em_parse_tree_cache( source_loader, profile );
  Compiler::SourceFileCache inc_parse_tree_cache( source_loader, profile );
  auto compiler = std::make_unique<Compiler::Compiler>( source_loader, em_parse_tree_cache,
                                                        inc_parse_tree_cache, profile );
  Compiler::ConsoleReporter c( true, true );
  Compiler::Report report( c );
  auto res = compiler->build_ast( "bautool.src", report, false );
  INFO_PRINTLN( res );
}

}  // namespace Testing
}  // namespace Pol
