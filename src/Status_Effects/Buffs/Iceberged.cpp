#include "../../../include/Status_Effects/Buffs/Iceberged.h"

namespace lab3 {
  
  void Iceberged::on_attack(Actor& target) {
    // TODO: No dmg
  }

  void Iceberged::on_dmg(Attack* action) {
    size_t dmg = action->get_dmg();
    if(_armor >= dmg) { 
      action->set_dmg(0);
      _armor -= dmg;
    } else {
      action->set_dmg(dmg-_armor);
      _armor=0;
    }
  }

  void Iceberged::on_end(Actor& target) {
    ostringstream ss;

    cout << ss.str();
  }

  const string Iceberged::get_description() const {
    ostringstream ss;

    ss << "with " << _armor << " points of armor left";

    return ss.str();
  }

  bool Iceberged::check_immunity(const Action* action) const {
    return true;
  }
}