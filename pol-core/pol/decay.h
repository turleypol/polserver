/** @file
 *
 * @par History
 */

#pragma once
#include <atomic>

#include "base/range.h"
#include "gameclck.h"
#include "reftypes.h"
#include "uobject.h"

#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/key_extractors.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index_container.hpp>

namespace Pol::Testing
{
void decay_test();
}
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
  void after_realms_size_changed();
  void on_delete_realm( Realms::Realm* realm );

  static constexpr int SKIP_FURTHER_CHECKS = 2;

private:
  void threadloop();
  void step();
  bool should_switch_realm() const;
  void switch_realm();
  void decay_worldzone();
  void calculate_sleeptime();

  std::atomic<unsigned> sleeptime = 0;
  size_t realm_index = ~0lu;
  Range2d area;
  Range2dItr area_itr;

  friend void Pol::Testing::decay_test();
};
}  // namespace Pol::Core
