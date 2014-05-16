#include "../../../../include/Actions/Defensive/Healing_Ability/Healing_Spell.h"
#include "../../../../include/Actors/Actor.h"

namespace lab3 {

   void Healing_Spell::calculate_action(Random& ran) {


      // loop through all debuffs and calculate the healing power
      for(auto& tmp : _target->get_debuffs()) {
         tmp.second->on_dmg(this);
      }

      // loop through all buffs and see what happens
      for(auto& tmp : _target->get_buffs()) {
         tmp.second->on_dmg(this);
      }

      _ss << _name <<" heals " << _target->get_name() << " for " << _healing_power;

   }

   void Healing_Spell::apply_dmg() {
      _ss << _target->heal_up(_healing_power);
   }

}
