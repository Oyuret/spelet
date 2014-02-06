#pragma once
#include "../../../../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.h"

namespace lab3 {

  class Frozen_Armor;

  const string Ice_Barrier::get_description() const {
    ostringstream ss;

    ss << "Grants you" << _armor << " armor";

    return ss.str();
  }
}
