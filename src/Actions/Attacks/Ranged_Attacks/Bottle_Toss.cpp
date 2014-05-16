#include "../../../../include/Actions/Attacks/Ranged_Attacks/Bottle_Toss.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {
  const string Bottle_Toss::get_description() const {
    ostringstream ss;

    ss << "Yarr! And a bottle of rum! The bottle deals " << get_dmg() << " damage to an enemy";

    return ss.str();
  }
}
