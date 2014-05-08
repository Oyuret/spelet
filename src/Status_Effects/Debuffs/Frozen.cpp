#include "../../../include/Status_Effects/Debuffs/Frozen.h"
#include "../../../include/Actions/Attacks/Spell_Attacks/Ice_Lance.h"

namespace lab3 {

  class Ice_Lance;

  const string Frozen::get_description() const {
    ostringstream ss;

    ss << "and rooted in place";

    return ss.str();
  }

  bool Frozen::can_perform(const Action* attack) const {
    bool value = true;

    if(dynamic_cast<const Close_Combat*>(attack)!=0) {
      value = false;
    }

    return value;
  }

  bool Frozen::check_immunity(const Action* action) const {
    return false;
  }

  void Frozen::on_dmg(Attack* attack) {
    if(dynamic_cast<Ice_Lance*>(attack)!=0) {
      attack->set_dmg(attack->get_dmg()*2);
    }
  }
}
