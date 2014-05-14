#include "../../include/Actions/Attack.h"
#include "../../include/Actors/Actor.h"

namespace lab3 {
   void Attack::calculate_action(Random& ran) {
      // loop through all debuffs and calculate the dmg
      for(auto& tmp : _target->get_debuffs()) {
         tmp.second->on_dmg(this);
      }

      // loop through all buffs and see what happens
      for(auto& tmp : _target->get_buffs()) {
         tmp.second->on_dmg(this);
      }

      _ss << _name <<" deals " << _damage << " points of damage to " << _target->get_name() << " ";

   }

   void Attack::apply_dmg() {
     // apply the dmg on target
      _ss << _target->apply_damage(_damage);
   }
}
