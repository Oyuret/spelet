#include "../../../../include/Actions/Attacks/Spell_Attacks/Frostbolt.h"

namespace lab3 {

  class Frozen;

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
