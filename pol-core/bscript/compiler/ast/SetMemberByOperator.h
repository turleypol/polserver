#ifndef POLSERVER_SETMEMBERBYOPERATOR_H
#define POLSERVER_SETMEMBERBYOPERATOR_H

#include "Expression.h"

#ifndef OBJMEMBERS_H
#include "objmembers.h"
#endif

#ifndef __TOKENS_H
#include "tokens.h"
#endif

namespace Pol::Bscript::Compiler
{
class SetMemberByOperator : public Expression
{
public:
  SetMemberByOperator( const SourceLocation&, bool consume, std::unique_ptr<Expression> entity,
                       std::string name, BTokenId token_id, std::unique_ptr<Expression> rhs,
                       const Pol::Bscript::ObjMember& );
  SetMemberByOperator( const SourceLocation&, bool consume, std::unique_ptr<Expression> entity,
                       std::string name, BTokenId token_id, const Pol::Bscript::ObjMember& );

  void accept( NodeVisitor& visitor ) override;
  void describe_to( fmt::Writer& ) const override;

  const bool consume;
  const std::string name;
  const BTokenId token_id;
  // does the semantic analyze known enough to know something is being assigned to?
  const Pol::Bscript::ObjMember& known_member;
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_SETMEMBERBYOPERATOR_H
