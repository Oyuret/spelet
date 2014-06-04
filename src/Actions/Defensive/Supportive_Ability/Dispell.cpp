#include "../../../../include/Actions/Defensive/Supportive_Ability/Dispell.h"
#include "../../../../include/Status_Effects/Debuff.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {

   void Dispell::apply_collaterals(Random& ran) {
      if(_target->get_debuffs().size() == 0) {
         _ss << _source->get_name() <<" attempted to dispell " << _target->get_name() << " but there was nothing to dispell!" << endl;
         return;
      }

      auto it = _target->get_debuffs().begin();
      Debuff* tmp = it->second;

      _ss << _source->get_name() << " dispelled " << tmp->get_name() << " from " << _target->get_name() << endl;

      _target->get_debuffs().erase(tmp->get_name());
      delete tmp;
   }
}
