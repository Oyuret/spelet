#include "../../../../include/Actions/Attacks/Spell_Attacks/Deep_Freeze.h"

namespace lab3 {

  class Deep_Frozen;

  void Deep_Freeze::apply_collaterals(Random& ran) {

    // check if the target has a frost nova on him
    auto gotit = _target->get_debuffs().find("Frozen");

    // if it hasn't got it
    if(gotit == _target->get_debuffs().end()) {
      _ss << _name << " has no effect on " << _target->get_name() << " since the target is not frozen" << endl;
      return;
    }

    // if we reach here. The target had a Frozen on him
    // add the Deep_Frozen debuff
    _target->add_debuff(new Deep_Frozen());
    _ss << _target->get_name() << " is now affected by " << this->_name << endl;

    // remove the Frozen effect
    delete gotit->second;
    _target->get_debuffs().erase(gotit);


  }

  const string Deep_Freeze::get_description() const {
    ostringstream ss;

    ss << "Turns a Frozen enemy into a popsicle";

    return ss.str();
  }
}
