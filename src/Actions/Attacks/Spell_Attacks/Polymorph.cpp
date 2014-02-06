#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Polymorph.h"

namespace lab3 {

  class Sheeped;

  const string Polymorph::get_description() const {
    ostringstream ss;

    ss << "Turns the targeted enemy into a fluffy sheep, any damage will break the effect";

    return ss.str();
  }
}
