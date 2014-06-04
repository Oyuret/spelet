#include "../../../../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.h"

namespace lab3 {

  class Absorb_Shield;

  void Absorb::apply_collaterals(Random& ran) {
    _ss << _source->get_name() << " grants " << _target->get_name() << " "
        << balance::_utility_spells[_name] << " armor points" << endl;
    _target->add_buff(new Absorb_Shield());
  }
}
