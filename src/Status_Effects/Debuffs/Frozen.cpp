#include "../../../include/Status_Effects/Debuffs/Frozen.h"
#include "../../../include/Actions/Attacks/Spell_Attacks/Ice_Lance.h"

namespace lab3 {

  class Ice_Lance;

  const string Frozen::get_description() const {
    ostringstream ss;

    ss << "and rooted in place";

    return ss.str();
  }

  const Status_Effect* Frozen::can_perform(const Action* attack) const {

    if(dynamic_cast<const Close_Combat*>(attack)!=0) {
      return this;
    }

    return nullptr;

  }

  void Frozen::on_dmg(Attack* attack) {
    if(dynamic_cast<Ice_Lance*>(attack)!=0) {
      attack->set_dmg(attack->get_dmg()*2);
    }
  }
}
