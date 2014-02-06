#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Frost_Nova.h"

namespace lab3 {

  class Frozen;
  
  const string Frost_Nova::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " damage to all enemies and freezes them in place";

    return ss.str();
  }
}
