#include "../../../include/Status_Effects/Buffs/Frozen_Armor.h"

namespace lab3 {

  const string Frozen_Armor::get_description() const {
    ostringstream ss;

    ss << "with " << _armor << " points of armor left";

    return ss.str();
  }
}
