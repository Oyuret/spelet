#include "../../../../include/Actions/Attacks/Spell_Attacks/Polymorph.h"

namespace lab3 {

  class Sheeped;

  void Polymorph::apply_collaterals(Random& ran) {

    _ss << _target->get_name() << " is now a fluffy sheep!" << endl;
    _ss << _target->get_name() << " gets healed to max health!" << endl;
    _ss << _target->heal_up(_target->get_max_health());
    _target->add_debuff(new Sheeped());
  }

}
