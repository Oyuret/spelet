#include "../../../../../include/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.h"
#include "../../../../../include/Actors/Actor.h"

namespace lab3 {

  const string Heal::get_description() const {
    ostringstream ss;

    ss << "Heals the target for " << _healing_power << " health points";

    return ss.str();
  }
}
