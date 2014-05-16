#include "../../../../include/Actions/Attacks/Melee_Attacks/Shank.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {
  const string Shank::get_description() const {
    ostringstream ss;

    ss << "A vicious attack, deals " << get_dmg() << " damage to an enemy";

    return ss.str();
  }
}
