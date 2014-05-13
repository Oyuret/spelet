#include "../../../../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.h"

namespace lab3 {

  class Frozen_Armor;

  const string Ice_Barrier::perform(Random& ran) {
    _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;
    apply_collaterals(ran);
    return _ss.str();
  }

  void Ice_Barrier::apply_collaterals(Random& ran) {
    _ss << _source->get_name() << " grants " << _target->get_name() << " " << balance::_utility_spells[_name] << " armor points" << endl;
    _target->add_buff(new Frozen_Armor());
  }

  const string Ice_Barrier::get_description() const {
    ostringstream ss;

    ss << "Grants you" << balance::_utility_spells[_name] << " armor";

    return ss.str();
  }
}
