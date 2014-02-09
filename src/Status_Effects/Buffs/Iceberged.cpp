#include "../../../include/Status_Effects/Buffs/Iceberged.h"

namespace lab3 {

  const string Iceberged::get_description() const {
    ostringstream ss;

    ss << "with " << _armor << " points of armor left";

    return ss.str();
  }

  bool Iceberged::check_immunity(const Action* action) const {
    return true;
  }
}