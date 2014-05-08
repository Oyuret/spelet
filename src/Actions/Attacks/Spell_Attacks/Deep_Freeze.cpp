#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Deep_Freeze.h"

namespace lab3 {

  class Deep_Frozen;


  const string Deep_Freeze::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    apply_collaterals();
    return _ss.str();
  }

  void Deep_Freeze::apply_collaterals() {
    _target->add_debuff(new Deep_Frozen());
    _ss << _target->get_name() << " is now affected by " << this->_name << endl;
  }

  const string Deep_Freeze::get_description() const {
    ostringstream ss;

    ss << "Turns a Frozen enemy into a popsicle";

    return ss.str();
  }
}
