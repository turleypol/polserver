/** @file
 *
 * @par History
 */

#pragma once
#include "base/range.h"

namespace Pol
{
namespace Core
{
class Decay
{
public:
  static void decay_thread( void* arg );

private:
  Decay() = default;
  bool init();
  void threadloop();
  void check();
  bool should_switch_realm();
  void decay_worldzone();

  unsigned sleeptime = 0;
  bool init = false;
  size_t realm_index = ~0u;
  Range2d area = Range2d();
  RangeIter area_itr = area.begin();
};
}  // namespace Core
}  // namespace Pol
#endif
