#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Silence.h"

namespace lab3 {

  class Silenced;
  
  const string Silence::get_description() const {
    ostringstream ss;

    ss << "Silences an enemy, preventing it from casting any spells!";

    return ss.str();
  }
}
