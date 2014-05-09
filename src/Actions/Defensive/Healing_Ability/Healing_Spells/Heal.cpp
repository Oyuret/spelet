#include "../../../../../include/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.h"
#include "../../../../../include/Actors/Actor.h"

namespace lab3 {

  const string Heal::get_description() const {
    ostringstream ss;

    ss << "Heals the target for " << _healing_power << " health points";

    return ss.str();
  }

  const string Heal::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    calculate_action(ran);
    _ss << _source->get_name() << " heals " << _target->get_name() << " for " << _healing_power << endl ;
    _target->heal_up(_healing_power);
    apply_collaterals(ran);
    return _ss.str();
  }

  void Heal::calculate_action(Random& ran) {

    // loop through all debuffs and calculate the healing power
    for(const std::pair<string, Debuff*>& tmp : _target->get_debuffs()) {
      tmp.second->on_dmg(this);
    }

    // loop through all buffs and see what happens
    for(const std::pair<string, Buff*>& tmp : _target->get_buffs()) {
      tmp.second->on_dmg(this);
    }
  }

  void Heal::apply_collaterals(Random& ran) {
    //DO nothing!
  }
}
