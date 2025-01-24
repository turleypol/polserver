/** @file
 *
 * @par History
 * - 2006/10/06 Shinigami: malloc.h -> stdlib.h
 */

#include "token.h"

#include <cstdio>
#include <cstring>

namespace Pol
{
namespace Bscript
{
/**
 * Initializes an empty token
 */
Token::Token()
    : id( TOK_TERM ),
      type( TYP_TERMINATOR ),
      dval( 0.0 ),
      precedence( -1 ),
      dbg_filenum( 0 ),
      dbg_linenum( 0 ),
      lval( 0 ),
      deprecated( false ),
      module( Mod_Basic ),
      token()
{
}

/**
 * Initializes a token copying data from a given one
 */
Token::Token( const Token& tok )
    : id( tok.id ),
      type( tok.type ),
      dval( tok.dval ),
      precedence( tok.precedence ),
      dbg_filenum( tok.dbg_filenum ),
      dbg_linenum( tok.dbg_linenum ),
      lval( tok.lval ),
      deprecated( tok.deprecated ),
      module( tok.module ),
      token( tok.token )
{
}

/**
 * Assigns the values from a given token to this one
 */
Token& Token::operator=( const Token& tok )
{
  module = tok.module;
  id = tok.id;
  type = tok.type;
  precedence = tok.precedence;
  deprecated = tok.deprecated;
  token = tok.token;
  dval = tok.dval;
  lval = tok.lval;

  dbg_filenum = tok.dbg_filenum;
  dbg_linenum = tok.dbg_linenum;

  return *this;
}

Token::Token( ModuleID i_module, BTokenId i_id, BTokenType i_type )
    : id( i_id ),
      type( i_type ),
      dval( 0.0 ),
      precedence( -1 ),
      dbg_filenum( 0 ),
      dbg_linenum( 0 ),
      lval( 0 ),
      deprecated( false ),
      module( static_cast<unsigned char>( i_module ) ),
      token()
{
}

Token::Token( BTokenId i_id, BTokenType i_type )
    : id( i_id ),
      type( i_type ),
      dval( 0.0 ),
      precedence( -1 ),
      dbg_filenum( 0 ),
      dbg_linenum( 0 ),
      lval( 0 ),
      deprecated( false ),
      module( Mod_Basic ),
      token()
{
}

/**
 * Erases all the content from the String (s), that becomes empty
 */
void Token::nulStr()
{
  token.clear();
}

void Token::setStr( std::string str )
{
  token = std::move( str );
}

}  // namespace Bscript
}  // namespace Pol
