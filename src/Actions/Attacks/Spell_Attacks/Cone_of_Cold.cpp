#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Cone_of_Cold.h"

namespace lab3 {

  class Frozen;
  
  const string Cone_of_Cold::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " damage to all enemies and has a chance to freeze them in place!";

    return ss.str();
  }
}
