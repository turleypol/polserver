/** @file
 *
 * @par History
 */

#include "fmodule.h"

#include <cstddef>

#include "userfunc.h"

namespace Pol
{
namespace Bscript
{
ModuleFunction::ModuleFunction( const char* fname, int i_nargs )
    : name( fname ), nargs( i_nargs ), funcidx( -1 ), used( false )
{
}

FunctionalityModule::FunctionalityModule( const char* i_modname )
    : have_indexes( false ), modulename( i_modname )
{
}

FunctionalityModule::~FunctionalityModule()
{
  while ( !functions.empty() )
  {
    delete functions.back();
    functions.pop_back();
  }
}

void FunctionalityModule::addFunction( const char* funcname, int nparams )
{
  auto mf = new ModuleFunction( funcname, nparams, uf );
  mf->funcidx = static_cast<unsigned int>( functions.size() );
  functions.push_back( mf );
}

// compiler only:
bool FunctionalityModule::isFunc( const char* funcName, ModuleFunction** pmf, int* funcidx )
{
  auto itr = functionsByName.find( funcName );
  if ( itr != functionsByName.end() )
  {
    ModuleFunction* mf = ( *itr ).second;

    if ( !mf->used )
    {
      mf->used = true;
      int old_funcidx = mf->funcidx;
      mf->funcidx = static_cast<unsigned int>( used_functions.size() );
      used_functions.push_back( mf );
      if ( old_funcidx != mf->funcidx )
      {
        std::swap( functions[old_funcidx], functions[mf->funcidx] );
        functions[old_funcidx]->funcidx = old_funcidx;
      }
    }
    *pmf = mf;
    *funcidx = mf->funcidx;
    return true;
  }
  return false;
}

void FunctionalityModule::fillFunctionsByName()
{
  for ( auto& mf : functions )
  {
    functionsByName[mf->name] = mf;
  }
}
}  // namespace Bscript
}  // namespace Pol
