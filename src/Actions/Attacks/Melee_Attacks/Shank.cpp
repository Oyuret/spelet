#include "../../../../include/Actions/Attacks/Melee_Attacks/Shank.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {
  const string Shank::get_description() const {
    ostringstream ss;

    ss << "A vicious attack, deals " << get_dmg() << " damage to an enemy";

    return ss.str();
  }

  const string Shank::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    //calculate_action(ran);
    _ss << "Shank deals " << _damage << " points of damage to " << _target->get_name() << endl;
    _target->set_damage(_damage);
    //apply_collaterals(ran);
    return _ss.str();
  }
}
