#include "../../../../include/Actions/Attacks/Spell_Attacks/Silence.h"

namespace lab3 {

  class Silenced;

  void Silence::apply_collaterals(Random& ran) {

    _ss << _source->get_name() << " silences " << _target->get_name() << endl;
    _target->add_debuff(new Silenced());
  }
}
