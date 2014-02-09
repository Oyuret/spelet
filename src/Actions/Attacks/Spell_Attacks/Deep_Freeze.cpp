#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Deep_Freeze.h"

namespace lab3 {

  class Deep_Frozen;


  const string Deep_Freeze::perform() {
    apply_collaterals(); 
    _ss << _target->get_name() << " is now affected by " << this->_name << endl;
    return _ss.str();
  }

  void Deep_Freeze::apply_collaterals() {
    _target->add_debuff(new Deep_Frozen());
  }
  
  const string Deep_Freeze::get_description() const {
    ostringstream ss;

    ss << "Turns a Frozen enemy into a popsicle";

    return ss.str();
  }
}
