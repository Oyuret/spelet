#include "../../../include/Status_Effects/Debuffs/Deep_Frozen.h"

namespace lab3 {

  const string Deep_Frozen::get_description() const {
    ostringstream ss;

    ss << "and turned into a popsicle!";

    return ss.str();
  }

  bool Deep_Frozen::can_perform(const Action* attack) const {    
    // we are deep frozen, cannot do anything
    return false;
  }

  bool Deep_Frozen::check_immunity(const Action* action) const {
    return false;
  }
}