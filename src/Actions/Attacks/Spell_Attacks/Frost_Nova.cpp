#include "../../../../include/Actions/Attacks/Spell_Attacks/Frost_Nova.h"

namespace lab3 {

  class Frozen;

  void Frost_Nova::apply_collaterals(Random& ran) {

    _ss << "and freezes the enemy in place " << endl;
    _target->add_debuff(new Frozen());
  }
}
