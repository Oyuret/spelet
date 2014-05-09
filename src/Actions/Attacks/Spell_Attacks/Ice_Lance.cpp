#include "../../../../include/Actions/Attacks/Spell_Attacks/Ice_Lance.h"
#include "../../../../include/Actors/Actor.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {


  const string Ice_Lance::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _target->get_name() << " on " << _target->get_name() << endl;
    calculate_action(ran);
    _ss << "Ice Lance deals " << _damage << " points of damage to " << _target->get_name() << endl;
    _target->set_damage(_damage);
    apply_collaterals(ran);
    return _ss.str();
  }

  void Ice_Lance::calculate_action(Random& ran) {

    // loop through all debuffs and calculate the dmg
    for(const std::pair<string, Debuff*>& tmp : _target->get_debuffs()) {
      tmp.second->on_dmg(this);
    }

    // loop through all buffs and see what happens
    for(const std::pair<string, Buff*>& tmp : _target->get_buffs()) {
      tmp.second->on_dmg(this);
    }
  }

  void Ice_Lance::apply_collaterals(Random& ran) {
    Frozen frost;

    // if there is a frozen on the target. remove it
    auto frozen = _target->get_debuffs().find(frost.get_name());

    if(frozen != _target->get_debuffs().end()) {
      delete frozen->second;
      _target->get_debuffs().erase(frozen);
    }

  }

  const string Ice_Lance::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " to the enemy. Double the dmg if the target is frozen.";

    return ss.str();
  }
}
