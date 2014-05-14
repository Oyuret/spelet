#include "../../../include/Status_Effects/Debuffs/Deep_Frozen.h"
#include "../../../include/Actions/Attacks/Spell_Attacks/Ice_Lance.h"

namespace lab3 {

  const string Deep_Frozen::get_description() const {
    ostringstream ss;

    ss << "and turned into a popsicle!";

    return ss.str();
  }

  const Status_Effect* Deep_Frozen::can_perform(const Action* attack) const {
    // we are deep frozen, cannot do anything
    return this;
  }

  void Deep_Frozen::on_dmg(Attack* attack) {
    if(dynamic_cast<Ice_Lance*>(attack)!=0) {
      attack->set_dmg(attack->get_dmg()*2);
    }
  }
}
