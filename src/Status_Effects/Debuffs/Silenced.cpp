#include "../../../include/Status_Effects/Debuffs/Silenced.h"

namespace lab3 {

  const string Silenced::get_description() const {
    ostringstream ss;

    ss << " and cannot cast spells!";

    return ss.str();
  }

  bool Silenced::can_perform(const Action* attack) const {
    bool value = true;

    if(dynamic_cast<const Spell*>(attack)!=0) {
      value = false;
    }

    return value;
  }

  bool Silenced::check_immunity(const Action* action) const {
    return false;
  }
}