#include "../../../../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.h"

namespace lab3 {

  class Iceberged;

  void Ice_Block::apply_collaterals(Random& ran) {

    _ss << _target->get_name() << " is now safe within a mountain of ice " << endl;

    for(auto& debuffs : _target->get_debuffs()) {
      Debuff* debuff = debuffs.second;
      _ss << debuff->get_name() << " fades from " << _target->get_name() << endl;
      delete debuff;
    }
    _target->get_debuffs().clear();
    _target->add_buff(new Iceberged());
  }

}
