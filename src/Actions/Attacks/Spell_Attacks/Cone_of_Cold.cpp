#include "../../../../include/Actions/Attacks/Spell_Attacks/Cone_of_Cold.h"

namespace lab3 {

  class Frozen;

  const string Cone_of_Cold::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " damage to all enemies and has a chance to freeze them in place!";

    return ss.str();
  }

  void Cone_of_Cold::apply_collaterals(Random& ran) {

    int dice_roll = ran.next_random();

    if(dice_roll >= 30) {
      _ss << "and freezes the enemy in place " << endl;
      _target->add_debuff(new Frozen());
    } else {
      _ss << endl;
    }
  }
}
