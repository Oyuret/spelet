#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Ice_Lance.h"

namespace lab3 {

  class Frozen;
  
  const string Ice_Lance::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " to the enemy. Double the dmg if the target is frozen.";

    return ss.str();
  }
}
