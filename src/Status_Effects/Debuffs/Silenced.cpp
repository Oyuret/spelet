#include "../../../include/Status_Effects/Debuffs/Silenced.h"

namespace lab3 {

  const string Silenced::get_description() const {
    ostringstream ss;

    ss << " and cannot cast spells!";

    return ss.str();
  }

  const Status_Effect* Silenced::can_perform(const Action* attack) const {

    if(dynamic_cast<const Spell*>(attack)!=0) {
      return this;
    }

    return nullptr;
  }

}
