/** @file
 *
 * @par History
 */

#pragma once
#include "base/range.h"
namespace Pol::Realms
{
class Realm;
}
namespace Pol::Core
{
class Decay
{
public:
  Decay() = default;
  static void decay_thread( void* arg );
  void calculate_sleeptime();
  void on_realm_delete( Realms::Realm* realm );

private:
  void threadloop();
  void check();
  bool should_switch_realm();
  void decay_worldzone();

  unsigned sleeptime = 0;
  bool init = false;
  size_t realm_index = ~0u;
  Range2d area;
  Range2dItr area_itr;
};
}  // namespace Pol::Core
