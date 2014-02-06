#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Deep_Freeze.h"

namespace lab3 {

  class Deep_Frozen;
  
  const string Deep_Freeze::get_description() const {
    ostringstream ss;

    ss << "Turns a Frozen enemy into a popsicle";

    return ss.str();
  }
}
