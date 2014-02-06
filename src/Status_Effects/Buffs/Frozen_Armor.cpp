#include "../../../include/Status_Effects/Buffs/Frozen_Armor.h"

namespace lab3 {
  
  void Frozen_Armor::on_attack(Actor& target) {
    // TODO: No dmg
  }

  void Frozen_Armor::on_dmg(Attack* action) {
    size_t dmg = action->get_dmg();
    if(_armor >= dmg) { 
      action->set_dmg(0);
      _armor -= dmg;
    } else {
      action->set_dmg(dmg-_armor);
      _armor=0;
    }
  }

  void Frozen_Armor::on_end(Actor& target) {
    ostringstream ss;

    if(_armor == 0) {
      ss << "Frost Nova has faded from " << target.get_name();
    }

    cout << ss.str();
  }

  const string Frozen_Armor::get_description() const {
    ostringstream ss;

    ss << "with " << _armor << " points of armor left";

    return ss.str();
  }
}