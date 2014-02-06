#pragma once
#include "../../../../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.h"

namespace lab3 {

  class Iceberged;

  const string Ice_Block::get_description() const {
    ostringstream ss;

    ss << "Removes all buffs and debuffs on you";

    return ss.str();
  }
}