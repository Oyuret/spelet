#include "../../../../include/Actions/Attacks/Melee_Attacks/Katana_Slice.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {

  const string Katana_Slice::get_description() const {
    ostringstream ss;

    ss << "A swift, silent, yet deadly attack. Deals " << get_dmg() << " damage to an enemy";

    return ss.str();
  }
}
