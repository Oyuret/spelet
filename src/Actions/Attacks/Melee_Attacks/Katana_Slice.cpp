#include "../../../../include/Actions/Attacks/Melee_Attacks/Katana_Slice.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {

  const string Katana_Slice::get_description() const {
    ostringstream ss;

    ss << "A swift, silent, yet deadly attack. Deals " << get_dmg() << " damage to an enemy";

    return ss.str();
  }

  const string Katana_Slice::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    //calculate_action(ran);
    _ss << "Katana Slice deals " << _damage << " points of damage to " << _target->get_name() << endl;
    _target->apply_damage(_damage);
    //apply_collaterals(ran);
    return _ss.str();
  }
}