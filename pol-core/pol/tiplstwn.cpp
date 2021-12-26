/** @file
 *
 * @par History
 */


#include <filesystem>
#include <string>

#include "globals/uvars.h"

namespace Pol
{
namespace Core
{
void load_tips()
{
  gamestate.tipfilenames.clear();

  for ( const auto& dir_entry : std::filesystem::directory_iterator( "tips/" ) )
  {
    if ( !dir_entry.is_regular_file() )
      continue;
    const auto path = dir_entry.path();
    if ( !path.extension().compare( ".txt" ) )
    {
      gamestate.tipfilenames.push_back( path.filename().string() );
    }
  }
}
}  // namespace Core
}  // namespace Pol
