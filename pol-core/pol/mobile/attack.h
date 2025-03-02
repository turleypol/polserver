#pragma once

namespace Pol
{
class UObject;
}
namespace Pol::Items
{
class Item;
}
namespace Pol::Mobile
{
class Character;

class Attackable
{
  virtual Character* attackable_mobile() { return nullptr; }
  virtual Item* attackable_item() { return nullptr; }
  virtual void set_opponent( Attackable* new_opponent, bool inform_old_opponent ) = 0;
  virtual void remove_opponent( Attackable* opp ) = 0;
};
class Opponent
{
public:
  Opponent() : _opp( nullptr ){};
  Opponent( Character* chr ) : _opp( chr ){};
  Opponent( Item* item ) : _opp( item )
  {
    if ( !item->is_attackable() )
      _opp = nullptr;
  };

  bool valid() const { return _opp != nullptr; };
  bool clear() { _opp = nullptr; };
  Character* mobile()
  {
    if ( valid() && !isItem( _opp->serial ) )
      return static_cast<Character*>( _opp );
    return nullptr;
  };
  Items::Item* item()
  {
    if ( valid() && isItem( _opp->serial ) )
      return static_cast<Items::Item*>( _opp );
    return nullptr;
  };

private:
  UObject* _opp;
}
}  // namespace Pol::Mobile
