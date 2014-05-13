#include "../../../../include/Actions/Attacks/Spell_Attacks/Smite.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {


  const string Smite::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    calculate_action(ran);
    _ss << "Smite deals " << _damage << " points of damage to " << _target->get_name() << endl;
     _ss << _target->apply_damage(_damage);
     apply_collaterals(ran);
    return _ss.str();
  }

  void Smite::calculate_action(Random& ran) {

    // loop through all debuffs and calculate the dmg
    for(const std::pair<string, Debuff*>& tmp : _target->get_debuffs()) {
      tmp.second->on_dmg(this);
    }

    // loop through all buffs and see what happens
    for(const std::pair<string, Buff*>& tmp : _target->get_buffs()) {
      tmp.second->on_dmg(this);
    }
  }

  void Smite::apply_collaterals(Random& ran) {
  }

  const string Smite::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " to the enemy.";

    return ss.str();
  }
}
