#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Polymorph.h"

namespace lab3 {

  class Sheeped;

  const string Polymorph::perform(Random& ran) {
    apply_collaterals(ran);
    return _ss.str();
  }

  void Polymorph::calculate_action(Random& ran) {
  }

  void Polymorph::apply_collaterals(Random& ran) {
    
    _ss << "Turns " << _target->get_name() << " into a sheep!" << endl;
    _target->add_debuff(new Sheeped());
  }

  const string Polymorph::get_description() const {
    ostringstream ss;

    ss << "Turns the targeted enemy into a fluffy sheep, any damage will break the effect";

    return ss.str();
  }
}
