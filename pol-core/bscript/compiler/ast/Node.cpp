#include "Node.h"

#include <format/format.h>

namespace Pol::Bscript::Compiler
{
Node::Node( const SourceLocation& source_location, NodeVector children )
    : children( std::move( children ) ), source_location( source_location )
{
}

Node::Node( const SourceLocation& source_location, std::unique_ptr<Node> child )
    : source_location( source_location )
{
  children.reserve( 1 );
  children.push_back( std::move( child ) );
}

Node::Node( const SourceLocation& source_location ) : children(), source_location( source_location )
{
}

std::string Node::describe() const
{
  std::string w;
  describe_to( w );
  return w;
}

std::string Node::to_string_tree() const
{
  return fmt::to_string( *this );
}

void Node::debug( const std::string& msg ) const
{
  source_location.debug( msg );
}

void Node::internal_error( const std::string& msg ) const
{
  source_location.internal_error( msg );
}

std::string Node::describe_tree_to_indented( const Node& node, unsigned indent )
{
  std::string w = std::string( indent * 2, ' ' ) + "- ";
  node.describe_to( w );
  w += "\n";
  for ( const auto& child : node.children )
  {
    if ( child )
      w += describe_tree_to_indented( *child, indent + 1 );
    else
      w += std::string( ( indent + 1 ) * 2, ' ' ) + "- [deleted]\n";
  }
  return w;
}

}  // namespace Pol::Bscript::Compiler

fmt::format_context::iterator fmt::formatter<Pol::Bscript::Compiler::Node>::format(
    const Pol::Bscript::Compiler::Node& n, fmt::format_context& ctx ) const
{
  return fmt::formatter<std::string>::format( node.describe_tree_to_indented( node, 0 ), ctx );
}
