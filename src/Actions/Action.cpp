#include "../../include/Actions/Action.h"
#include "../../include/Actors/Actor.h"
#include "../../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.h"

namespace lab3 {

   void Action::apply_collaterals(Random& ran) {
     _ss << endl;
   }

   const string Action::perform(Random& ran) {

      // check if the caster can actually perform
      for(auto& debuff: _source->get_debuffs()) {

          //////////////////////////////////
          // SPECIAL CASE: ICE_BLOCK      //
          // Iceblock can be cast anytime //
          //////////////////////////////////

          if(dynamic_cast<Ice_Block*>(this)!=NULL) {
            break;
          }

         // the eventual reason for the failure
         const auto* reason = debuff.second->can_perform(this);

         if(reason != nullptr) {
            _ss << _source->get_name() << " fails to cast " << _name
                << " due to being afflicted by " << reason->get_name() << endl;
            return _ss.str();
         }

      }

      // check if the target is alive
      if(_target->is_dead()) {
         _ss << _source->get_name() << " casts " << _name << " on "
             << _target->get_name() << " but has no effect since "
             << _target->get_name() << " is dead" << endl;
         return _ss.str();
      }

      // if we reach here. We can actually cast the spell and the target isn't dead

      //check if the target isn't immune
      for(auto& buff: _target->get_buffs()) {
         // the eventual reason for the failure
         const auto* reason = buff.second->check_immunity(this);

         if(reason != nullptr) {
            _ss << _source->get_name() << " casts " << _name << " on "
                << _target->get_name()<< "but target is immune due to "
                << reason->get_name() << endl;
            return _ss.str();
         }

      }

      // if we reach here. Then proceed with normal cast

      // tell them what we are casting
      _ss << _source->get_name() << " casts " << _name << " on " << _target->get_name() << endl;

      // calculate the dmg
      calculate_action(ran);

      // check if we have collaterals
      apply_collaterals(ran);

      // apply the dmg
      apply_dmg();

      // return the string
      _ss.str();

      return _ss.str();
   }
}
