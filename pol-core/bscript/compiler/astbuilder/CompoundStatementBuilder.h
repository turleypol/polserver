#ifndef POLSERVER_COMPOUNDSTATEMENTBUILDER_H
#define POLSERVER_COMPOUNDSTATEMENTBUILDER_H

#include "SimpleStatementBuilder.h"

namespace Pol::Bscript::Compiler
{

class CompoundStatementBuilder : public SimpleStatementBuilder
{
public:
  CompoundStatementBuilder( const SourceFileIdentifier&, BuilderWorkspace& );

  void add_statements( EscriptGrammar::EscriptParser::StatementContext*,
                       std::vector<std::unique_ptr<Statement>>& );
  void add_statements( EscriptGrammar::EscriptParser::UnambiguousStatementContext*,
                       std::vector<std::unique_ptr<Statement>>& );

};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_COMPOUNDSTATEMENTBUILDER_H
