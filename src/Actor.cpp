#include "../include/Actors/Actor.h"
#include "../include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.h"
#include "../include/Status_Effects/Shield.h"
#include <list>

namespace lab3 {
   class Ice_Block;

   void Actor::add_buff(Buff* buff) {
      std::pair<string, Buff*> tmp (buff->get_name(), buff);

      // if the buff is already present. Refresh
      if(_buffs.find(buff->get_name()) == _buffs.end()) {
         _buffs.insert(tmp);
      } else {
         Buff* tmp1 = _buffs.find(buff->get_name())->second;
         delete tmp1;
         _buffs.erase(buff->get_name());
         _buffs.insert(tmp);
      }
   }

   void Actor::add_debuff(Debuff* debuff) {
      std::pair<string, Debuff*> tmp (debuff->get_name(), debuff);

      // if the debuff is already present, refresh
      if(_debuffs.find(debuff->get_name()) == _debuffs.end()) {
         _debuffs.insert(tmp);
      } else {
         Debuff* tmp1 = _debuffs.find(debuff->get_name())->second;
         delete tmp1;
         _debuffs.erase(debuff->get_name());
         _debuffs.insert(tmp);
      }
   }

   const string Actor::get_name() const {
      return _name;
   }

   const string Actor::get_description() const {
      return _description;
   }

   const int Actor::get_health() const {
      return _health;
   }

   double Actor::get_health_precent() const {
      return (double)((double)_health) / ((double)_max_health);
   }

   const string Actor::apply_damage(size_t dmg) {

      ostringstream ss;

      list<Buff*> to_be_deleted;
      int total_absorbed =0;

      // Look through our buffs and look for a shield
      for(auto& buffs: _buffs) {
         Buff* buff_ptr = buffs.second;

         // if we can cast it into a shield
         if(dynamic_cast<Shield*>(buff_ptr)!=0) {
            Shield* shield_ptr = dynamic_cast<Shield*>(buff_ptr);

            // save the initial dmg
            int tmp_dmg = dmg;

            // if the dmg is greater than the armor of the shield
            if(dmg >= shield_ptr->get_armor()) {

               // lessen the dmg
               dmg -= shield_ptr->get_armor();

               // update the total absorbed
               total_absorbed += (tmp_dmg - dmg);

               // Add it to be deleted
               to_be_deleted.push_back(buff_ptr);

            } else {
               // The armor was bigger

               // update the shield
               shield_ptr->set_armor(shield_ptr->get_armor()-dmg);

               // update the total absorbed
               total_absorbed += dmg;

               // lessen the dmg
               dmg = 0;

            }

         }
      }

      // Update the health of the Actor
      ss << get_name() << " suffers " << dmg << " points of dmg. Absorbed("
          << total_absorbed << ")." << endl;
      _health-=dmg;
      if(_health<=0) {
         _health=0;
         _dead=true;
      }

      // clean up shields
      for(Buff* buff : to_be_deleted) {

         ss << buff ->get_name() << " fades from " << get_name() << endl;
         _buffs.erase(buff->get_name());
         delete buff;
      }

      return ss.str();
   }

   const string Actor::heal_up(size_t healing_power) {
      ostringstream ss;
      _health+=healing_power;
      if(_health >_max_health) {
         _health=_max_health;
      }

      return ss.str();
   }

   const string Actor::get_status() const {
      ostringstream ss;

      if(_dead==true) {
         ss << get_name() << " is dead!" << endl;
         return ss.str();
      }

      ss << get_name() << " has " << get_health() << " health points left.\n";

      // list buffs
      if(_buffs.size() != 0) {
         ss << get_name() << " is currently buffed by ";
         for(auto& buff : _buffs) {
            ss << buff.first << " " << buff.second->get_description() <<"\n";
         }
      } else {
         ss << get_name() << " has currently no buffs.\n";
      }

      // list debuffs
      if(_debuffs.size() != 0) {
         ss << get_name() << " is currently affected by ";
         for(auto& debuff : _debuffs) {
            ss << debuff.first <<  " " << debuff.second->get_description() << "\n";
         }
      } else {
         ss << get_name() <<" has currently no debuffs.\n";
      }

      return ss.str();

   }

   // check if the Actor can perform the given action
   bool Actor::can_perform(const Action* action) const {
      bool status = true;

      // if the Action is Ice_Block we can ALWAYS perform it
      if(dynamic_cast<const Ice_Block*>(action)!=0) return true;


      // loop through all debuffs and see if we can perform
      for(const std::pair<string, Debuff*>& tmp : _debuffs) {
         if(tmp.second->can_perform(action)==false)
            status=false;
      }

      return status;
   }

   // check if the Actor is immune to the given Action
   bool Actor::is_immune(const Action* action) const {
      bool value = false;

      // if we are dead we know we are immune
      if(_dead) return true;

      // loop through all debuffs and check if it makes us immune
      for(const std::pair<string, Debuff*>& tmp : _debuffs) {
         if(tmp.second->check_immunity(action)==true)
            value=true;
      }

      // loop through all buffs and check if we are immune
      for(const std::pair<string, Buff*>& tmp : _buffs) {
         if(tmp.second->check_immunity(action)==true)
            value=true;
      }

      return value;
   }

   // this actor is dead. Commence clean-up
   Actor::~Actor() {
      // clean up buffs
      for(auto& buff : _buffs) {
         delete buff.second;
      }

      // clean up  debuffs
      for(auto& debuff : _debuffs) {
         delete debuff.second;
      }

      _buffs.clear();
      _debuffs.clear();
   }
}
