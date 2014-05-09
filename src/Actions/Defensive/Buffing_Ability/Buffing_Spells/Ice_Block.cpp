#include "../../../../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.h"

namespace lab3 {

  class Iceberged;

  const string Ice_Block::perform(Random& ran) {
    _ss << _source->get_name() << " cast " << _name << " on " << _target->get_name() << endl;
    apply_collaterals(ran);
    return _ss.str();
  }

  void Ice_Block::apply_collaterals(Random& ran) {
    _ss << _target->get_name() << " is now safe within a mountain of ice " << endl;
    _target->add_buff(new Iceberged());
  }

  const string Ice_Block::get_description() const {
    ostringstream ss;

    ss << "Removes all debuffs on the target and makes it immune to dmg until next turn";

    return ss.str();
  }
}
