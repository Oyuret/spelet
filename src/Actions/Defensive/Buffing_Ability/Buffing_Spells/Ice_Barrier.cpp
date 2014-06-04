#include "../../../../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.h"

namespace lab3 {

  class Frozen_Armor;

  void Ice_Barrier::apply_collaterals(Random& ran) {
    _ss << _source->get_name() << " grants " << _target->get_name()
        << " " << balance::_utility_spells[_name] << " armor points" << endl;
    _target->add_buff(new Frozen_Armor());
  }

}
