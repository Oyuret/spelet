#include "../../../../include/Actions/Attacks/Spell_Attacks/Frostbolt.h"

namespace lab3 {

  class Frozen;

  const string Frostbolt::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    calculate_action(ran);
    _ss << _name <<" deals " << _damage << " points of damage to " << _target->get_name() << " ";
    apply_collaterals(ran);
    _ss << _target->apply_damage(_damage);
    return _ss.str();
  }

  void Frostbolt::calculate_action(Random& ran) {

    // loop through all debuffs and calculate the dmg
    for(const std::pair<string, Debuff*>& tmp : _target->get_debuffs()) {
      tmp.second->on_dmg(this);
    }

    // loop through all buffs and see what happens
    for(const std::pair<string, Buff*>& tmp : _target->get_buffs()) {
      tmp.second->on_dmg(this);
    }
  }

  void Frostbolt::apply_collaterals(Random& ran) {

    int dice_roll = ran.next_random();

    if(dice_roll >= 50) {
      _ss << "and freezes the enemy in place " << endl;
      _target->add_debuff(new Frozen());
    } else {
      _ss << endl;
    }
  }

  const string Frostbolt::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " damage to an enemy and has a chance to freeze it in place";

    return ss.str();
  }
}
