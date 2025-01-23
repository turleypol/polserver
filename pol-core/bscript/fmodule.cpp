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
  auto mf = new ModuleFunction( funcname, nparams );
  mf->funcidx = static_cast<unsigned int>( functions.size() );
  functions.push_back( mf );
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
