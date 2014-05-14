#include "../../../../include/Actions/Attacks/Spell_Attacks/Smite.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {

  const string Smite::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " to the enemy.";

    return ss.str();
  }
}
