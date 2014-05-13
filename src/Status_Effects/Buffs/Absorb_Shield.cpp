#include "../../../include/Status_Effects/Buffs/Absorb_Shield.h"

namespace lab3 {

  const string Absorb_Shield::get_description() const {
    ostringstream ss;

    ss << "with " << _armor << " points of armor left";

    return ss.str();
  }

  bool Absorb_Shield::check_immunity(const Action* action) const {
    return false;
  }
}
