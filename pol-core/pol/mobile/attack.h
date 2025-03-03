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
public:
  Attackable() = default;
  Attackable( Character* chr ) : _opp( chr ){};
  Attackable( Items::Item* item ) : _opp( item )
  {
    if ( !item->is_attackable() )
      _opp = nullptr;
  };
  explicit operator bool() const { return _opp != nullptr; };
  void clear() { _opp = nullptr; };
  UObject* object() { return _opp; };
  Character* mobile()
  {
    if ( valid() && _opp->ismobile() )
      return static_cast<Character*>( _opp );
    return nullptr;
  };
  Items::Item* item()
  {
    if ( valid() && _opp->isitem() )
      return static_cast<Items::Item*>( _opp );
    return nullptr;
  };

private:
  UObject* _opp = nullptr;
}
}  // namespace Pol::Mobile
