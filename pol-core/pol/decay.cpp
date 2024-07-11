/** @file
 *
 * @par History
 * - 2005/01/23 Shinigami: decay_items & decay_thread - Tokuno MapDimension doesn't fit blocks of
 * 64x64 (WGRID_SIZE)
 * - 2010/03/28 Shinigami: Transmit Pointer as Pointer and not Int as Pointer within
 * decay_thread_shadow
 */


#include "decay.h"

#include <stddef.h>

#include "../clib/esignal.h"
#include "../clib/logfacility.h"
#include "../plib/systemstate.h"
#include "gameclck.h"
#include "globals/state.h"
#include "globals/uvars.h"
#include "item/item.h"
#include "item/itemdesc.h"
#include "polcfg.h"
#include "polsem.h"
#include "realms/realm.h"
#include "scrdef.h"
#include "scrsched.h"
#include "syshook.h"
#include "ufunc.h"
#include "uoscrobj.h"
#include "uworld.h"


namespace Pol::Core
{
///
/// [1] Item Decay Criteria
///     An Item is allowed to decay if ALL of the following are true:
///        - it is not In Use
///        - it is Movable, OR it is a Corpse
///        - its 'decayat' member is nonzero
///            AND the Game Clock has passed this 'decayat' time
///        - it is not supported by a multi,
///            OR its itemdesc.cfg entry specifies 'DecaysOnMultis 1'
///        - it itemdesc.cfg entry specifies no 'DestroyScript',
///            OR its 'DestroyScript' returns nonzero.
///
/// [2] Decay Action
///     Container contents are moved to the ground at the Container's location
///     before destroying the container.
///

void Decay::decay_worldzone()
{
  auto* realm = gamestate.Realms[realm_index];
  Zone& zone = realm->getzone_grid( *area_itr );
  gameclock_t now = read_gameclock();
  bool statistics = Plib::systemstate.config.thread_decay_statistics;

  for ( ZoneItems::size_type idx = 0; idx < zone.items.size(); ++idx )
  {
    Items::Item* item = zone.items[idx];
    if ( statistics )
    {
      if ( item->can_decay() )
      {
        const Items::ItemDesc& descriptor = item->itemdesc();
        if ( !descriptor.decays_on_multis )
        {
          Multi::UMulti* multi = realm->find_supporting_multi( item->pos3d() );
          if ( multi == nullptr )
            stateManager.decay_statistics.temp_count_active++;
        }
        else
          stateManager.decay_statistics.temp_count_active++;
      }
    }
    if ( item->should_decay( now ) )
    {
      // check the CanDecay syshook first if it returns 1 go over to other checks
      if ( gamestate.system_hooks.can_decay )
      {
        if ( !gamestate.system_hooks.can_decay->call( new Module::EItemRefObjImp( item ) ) )
          continue;
      }

      const Items::ItemDesc& descriptor = item->itemdesc();
      Multi::UMulti* multi = realm->find_supporting_multi( item->pos3d() );

      // some things don't decay on multis:
      if ( multi != nullptr && !descriptor.decays_on_multis )
        continue;

      if ( statistics )
        stateManager.decay_statistics.temp_count_decayed++;

      if ( !descriptor.destroy_script.empty() && !item->inuse() )
      {
        bool decayok = call_script( descriptor.destroy_script, item->make_ref() );
        if ( !decayok )
          continue;
      }

      item->spill_contents( multi );
      destroy_item( item );
      --idx;
    }
  }
}

bool Decay::should_switch_realm()
{
  if ( realm_index >= gamestate.Realms.size() )
    return true;
  Realms::Realm* realm = gamestate.Realms[realm_index];
  if ( realm == nullptr )
    return true;

  ++area_itr;

  if ( area_itr == area.end() )
    return true;
  return false;
}

void Decay::check()
{
  // check if realm_index is still valid and if y is still in valid range
  if ( should_switch_realm() )
  {
    ++realm_index;
    if ( realm_index >= gamestate.Realms.size() )
    {
      realm_index = 0;
      if ( !init && Plib::systemstate.config.thread_decay_statistics )
      {
        stateManager.decay_statistics.decayed.update(
            stateManager.decay_statistics.temp_count_decayed );
        stateManager.decay_statistics.active_decay.update(
            stateManager.decay_statistics.temp_count_active );
        stateManager.decay_statistics.temp_count_decayed = 0;
        stateManager.decay_statistics.temp_count_active = 0;
        POLLOG_INFOLN(
            "DECAY STATISTICS: decayed: max {} mean {} variance {} runs {} active max {} mean "
            "{} variance {} runs {}",
            stateManager.decay_statistics.decayed.max(),
            stateManager.decay_statistics.decayed.mean(),
            stateManager.decay_statistics.decayed.variance(),
            stateManager.decay_statistics.decayed.count(),
            stateManager.decay_statistics.active_decay.max(),
            stateManager.decay_statistics.active_decay.mean(),
            stateManager.decay_statistics.active_decay.variance(),
            stateManager.decay_statistics.active_decay.count() );
      }
      init = false;
    }
    area = gamestate.Realms[realm_index]->gridarea();
    area_itr = area.begin();
  }
  decay_worldzone();
}


bool Decay::initialize()
{
  // calculate total grid count, based on current realms
  unsigned total_grid_count = 0;
  for ( const auto& realm : gamestate.Realms )
  {
    total_grid_count += ( realm->grid_width() * realm->grid_height() );
  }
  if ( !total_grid_count )
  {
    POLLOG_ERRORLN( "No realm grids?!" );
    return false;
  }
  // sweep every realm ~10minutes -> 36ms for 6 realms
  sleeptime = ( 60 * 10L * 1000 ) / total_grid_count;
  sleeptime = std::clamp( sleeptime, 30u, 500u );  // limit to 30ms-500ms
  return true;
}
void Decay::decay_thread( void* /*arg*/ )
{
  auto decay = Decay();
  if ( !decay.initialize() )
    return;
  decay.threadloop();
}

void Decay::threadloop()
{
  while ( !Clib::exit_signalled )
  {
    {
      PolLock lck;
      polclock_checkin();
      check();
      restart_all_clients();
    }
    pol_sleep_ms( sleeptime );
  }
}
}  // namespace Pol::Core
