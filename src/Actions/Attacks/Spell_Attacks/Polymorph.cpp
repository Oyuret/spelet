#include "../../../../include/Actions/Attacks/Spell_Attacks/Polymorph.h"

namespace lab3 {

  class Sheeped;

  const string Polymorph::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    apply_collaterals(ran);
    return _ss.str();
  }

  void Polymorph::calculate_action(Random& ran) {
  }

  void Polymorph::apply_collaterals(Random& ran) {

    _ss << _target->get_name() << " is now a fluffy sheep!" << endl;
    _target->add_debuff(new Sheeped());
  }

  const string Polymorph::get_description() const {
    ostringstream ss;

    ss << "Turns the targeted enemy into a fluffy sheep, any damage will break the effect";

    return ss.str();
  }
}
