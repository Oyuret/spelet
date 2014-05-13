#include "../../../../include/Actions/Attacks/Ranged_Attacks/Bottle_Toss.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {
  const string Bottle_Toss::get_description() const {
    ostringstream ss;

    ss << "Yarr! And a bottle of rum! The bottle deals " << get_dmg() << " damage to an enemy";

    return ss.str();
  }

  const string Bottle_Toss::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    //calculate_action(ran);
    _ss << "Bottle toss deals " << _damage << " points of damage to " << _target->get_name() << endl;
    _target->apply_damage(_damage);
    //apply_collaterals(ran);
    return _ss.str();
  }
}
