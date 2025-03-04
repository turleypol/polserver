#pragma once

namespace Pol::Core
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
  Attackable( Character* chr );
  Attackable( Items::Item* item );
  explicit operator bool() const { return _opp != nullptr; };
  void clear() { _opp = nullptr; };
  Core::UObject* object() { return _opp; };
  Character* mobile();
  Items::Item* item();

private:
  Core::UObject* _opp = nullptr;
};
}  // namespace Pol::Mobile
