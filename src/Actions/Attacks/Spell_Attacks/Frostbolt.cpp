#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Frostbolt.h"

namespace lab3 {

  class Frozen;
  
  const string Frostbolt::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " damage to an enemy and has a chance to freeze it in place";

    return ss.str();
  }
}
