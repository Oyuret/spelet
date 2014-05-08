#include "../../../../../include/Actors/Enemies/Ranged/Mages/White_Mage.h"
#include "../../../../../include/Actions/Defensive/Healing_Ability/Healing_Spells/Heal.h"
#include "../../../../../include/Actions/Defensive/Supportive_Ability/Dispell.h"

namespace lab3 {

  Action* White_Mage::pick_action(list<Player*>& players, list<Enemy*>& enemies) {
    Enemy* lowest_health;
    double lowest = 10;

    // Get the NPC with lowest health
    for(Enemy* npc : enemies) {
      if(npc->get_health_precent() < lowest && npc->is_dead()!= true) {
        lowest_health = npc;
        lowest = npc->get_health_precent();
      }
    }

    // Check how low he really was
    if(lowest_health->get_health_precent() <= 0.45) {
      return new Heal(this, lowest_health);
    }

    // The lowest health dude wasn't really that hurt
    // Let's see if anybody needs a dispell
    for(Enemy* npc : enemies) {

      if(npc->get_debuffs().size()>0 && npc->is_dead()!= true) {
        return new Dispell(this , npc);
      }
    }

    // There was nothing to dispell
    // Just toss a random heal
    return new Heal(this, lowest_health);
  }
}
