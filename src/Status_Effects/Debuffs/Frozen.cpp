#include "../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {

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
}