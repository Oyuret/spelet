#include "../../../../include/Actions/Attacks/Spell_Attacks/Ice_Lance.h"
#include "../../../../include/Actors/Actor.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {

  void Ice_Lance::apply_collaterals(Random& ran) {
    Frozen frost;

    _ss << endl;

    // if there is a frozen on the target. remove it
    auto frozen = _target->get_debuffs().find(frost.get_name());

    if(frozen != _target->get_debuffs().end()) {
      _ss << frozen->second->get_name() << " fades from " << _target->get_name() << endl;
      delete frozen->second;
      _target->get_debuffs().erase(frozen);
    }

  }

  const string Ice_Lance::get_description() const {
    ostringstream ss;

    ss << "Deals " << get_dmg() << " to the enemy. Double the dmg if the target is frozen.";

    return ss.str();
  }
}
