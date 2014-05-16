#include "../../../../include/Actions/Attacks/Ranged_Attacks/Shuriken_Toss.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {
  const string Shuriken_Toss::get_description() const {
    ostringstream ss;

    ss << "Six-pointed ninja star. Deals " << get_dmg() << " damage to an enemy";

    return ss.str();
  }
}
