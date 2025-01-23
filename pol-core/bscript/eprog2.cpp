/** @file
 *
 * @par History
 */


#include <stdio.h>
#include <string.h>
#include <string>

#include "../clib/clib.h"
#include "../clib/logfacility.h"
#include "../clib/passert.h"
#include "../clib/rawtypes.h"
#include "../clib/stlutil.h"
#include "compctx.h"
// EPROG compiler-only functions
#include "eprog.h"
#include "filefmt.h"
#include "fmodule.h"
#include "symcont.h"
#include "token.h"
#include "tokens.h"
#include "userfunc.h"

namespace Pol
{
namespace Bscript
{
extern int include_debug;

void EScriptProgram::erase()
{
  tokens.erase();
  symbols.erase();
  nglobals = 0;
  dbg_filenum.clear();
  dbg_linenum.clear();
  globalvarnames.clear();
  blocks.clear();
  dbg_functions.clear();
  dbg_ins_blocks.clear();
  dbg_ins_statementbegin.clear();
}

void EScriptProgram::add_ins_dbg_info()
{
  dbg_filenum.push_back( curfile );
  dbg_linenum.push_back( curline );
  dbg_ins_blocks.push_back( curblock );
  dbg_ins_statementbegin.push_back( statementbegin );
  statementbegin = false;
  passert( tokens.count() == dbg_filenum.size() );
}

void EScriptProgram::setcontext( const CompilerContext& ctx )
{
  curfile = ctx.dbg_filenum;
  curline = ctx.line;
}

unsigned EScriptProgram::varcount( unsigned block )
{
  unsigned cnt = static_cast<unsigned int>( blocks[block].localvarnames.size() );
  if ( block != 0 )
  {
    cnt += varcount( blocks[block].parentblockidx );
  }
  return cnt;
}
unsigned EScriptProgram::parentvariables( unsigned parent )
{
  unsigned cnt = 0;
  if ( parent != 0 )
  {
    cnt = blocks[parent].parentvariables + parentvariables( blocks[parent].parentblockidx );
  }
  return cnt;
}

std::string EScriptProgram::dbg_get_instruction( size_t atPC ) const
{
  OSTRINGSTREAM os;
  os << instr[atPC].token;
  return OSTRINGSTREAM_STR( os );
}


void EScriptProgram::enterfunction()
{
  savecurblock = curblock;
  curblock = 0;
}
void EScriptProgram::leavefunction()
{
  curblock = savecurblock;
}
void EScriptProgram::enterblock()
{
  EPDbgBlock block;
  if ( blocks.empty() )
  {
    block.parentblockidx = 0;
    block.parentvariables = 0;
    blocks.push_back( block );
    curblock = 0;
  }

  block.parentblockidx = curblock;
  block.parentvariables = varcount( curblock );

  curblock = static_cast<unsigned int>( blocks.size() );
  blocks.push_back( block );
}
void EScriptProgram::leaveblock()
{
  passert( curblock );
  bool remove = blocks[curblock].localvarnames.empty() && curblock == blocks.size() - 1;
  curblock = blocks[curblock].parentblockidx;
  if ( remove )
  {
    blocks.pop_back();
    for ( auto& elem : dbg_ins_blocks )
    {
      if ( elem >= blocks.size() )
        elem = curblock;
    }
  }
}
void EScriptProgram::addlocalvar( const std::string& localvarname )
{
  blocks[curblock].localvarnames.push_back( localvarname );
}
void EScriptProgram::addfunction( std::string funcname, unsigned firstPC, unsigned lastPC )
{
  EPDbgFunction func;
  func.name = funcname;
  func.firstPC = firstPC;
  func.lastPC = lastPC;
  dbg_functions.push_back( func );
}

size_t EScriptProgram::sizeEstimate() const
{
  using namespace Clib;
  size_t size = sizeof( EScriptProgram );
  size += memsize( globalvarnames );
  for ( const auto& l : globalvarnames )
    size += l.capacity();
  size += memsize( dbg_filenames );
  for ( const auto& l : dbg_filenames )
    size += l.capacity();
  size += memsize( dbg_filenum ) + memsize( dbg_linenum ) + memsize( dbg_ins_blocks ) +
          memsize( dbg_ins_statementbegin ) + memsize( modules ) + memsize( exported_functions ) +
          memsize( instr ) + memsize( blocks ) + memsize( dbg_functions );

  return size;
}
}  // namespace Bscript
}  // namespace Pol
