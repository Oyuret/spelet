#include "../../../include/Status_Effects/Debuffs/Sheeped.h"

namespace lab3 {

// TODO (Yuri#1#): Fix Removal of sheeped on dmg


  const string Sheeped::get_description() const {
    ostringstream ss;

    ss << " and is now chewing grass";

    return ss.str();
  }

  const Status_Effect* Sheeped::can_perform(const Action* attack) const {
    return this;
  }

}
