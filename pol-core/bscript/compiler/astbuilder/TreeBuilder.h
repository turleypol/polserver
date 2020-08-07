#ifndef POLSERVER_TREEBUILDER_H
#define POLSERVER_TREEBUILDER_H

#include <EscriptGrammar/EscriptParserBaseVisitor.h>
#include <memory>
#include <vector>

namespace Pol::Bscript::Compiler
{
class Report;
class SourceLocation;
class SourceFileIdentifier;
class BuilderWorkspace;

class TreeBuilder
{
public:
  TreeBuilder( const SourceFileIdentifier&, BuilderWorkspace& );

  SourceLocation location_for( antlr4::ParserRuleContext& ) const;
  SourceLocation location_for( antlr4::tree::TerminalNode& ) const;

  std::string text( antlr4::tree::TerminalNode* );
protected:

  Report& report;

  const SourceFileIdentifier& source_file_identifier;

  BuilderWorkspace& workspace;
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_TREEBUILDER_H
