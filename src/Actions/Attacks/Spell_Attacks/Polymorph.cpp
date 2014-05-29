#include "../../../../include/Actions/Attacks/Spell_Attacks/Polymorph.h"

namespace lab3 {

  class Sheeped;

  void Polymorph::apply_collaterals(Random& ran) {

    _ss << _target->get_name() << " is now a fluffy sheep!" << endl;
    _ss << _target->get_name() << " gets healed to max health!" << endl;
    _ss << _target->heal_up(_target->get_max_health());
    _target->add_debuff(new Sheeped());
  }

  const string Polymorph::get_description() const {
    ostringstream ss;

    ss << "Turns the targeted enemy into a fluffy sheep. Heals the target to full health. Any damage will break the effect";

    return ss.str();
  }
}
