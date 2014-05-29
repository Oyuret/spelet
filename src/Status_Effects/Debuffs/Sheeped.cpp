#include "../../../include/Status_Effects/Debuffs/Sheeped.h"

namespace lab3 {


  const string Sheeped::get_description() const {
    ostringstream ss;

    ss << "and is now chewing grass";

    return ss.str();
  }

  const Status_Effect* Sheeped::can_perform(const Action* attack) const {
    return this;
  }

}
