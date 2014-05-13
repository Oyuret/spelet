#include "../../../../../include/Actors/Enemies/Ranged/Mages/Black_Mage.h"
#include "../../../../../include/Actions/Attacks/Spell_Attacks/Frostbolt.h"
#include "../../../../../include/Actions/Attacks/Spell_Attacks/Ice_Lance.h"


namespace lab3 {
  class Frozen;

  Action* Black_Mage::pick_action(list<Player*>& players, list<Enemy*>& enemies) {
    list<Player*> frozen_ppl;

    // check if any of the enemies are Frozen
    for(Player* player : players) {

      // loop through all their debuffs
      for(auto& debuffs : player->get_debuffs()) {
        auto* debuff = debuffs.second;

        // if the enemy is frozen. Add him to the list
        if(dynamic_cast<Frozen*>(debuff)!=0 && player->is_dead()!=true) {
          frozen_ppl.push_back(player);
        }
      }

    }

    // Any frozen ppl? If so pick the one with the lowest health
    if(frozen_ppl.size() != 0) {
      double lowest_health = 2;
      Player* target;

      for(Player* player : frozen_ppl) {
        if(player->get_health_precent() < lowest_health) {
          target = player;
          lowest_health = player->get_health_precent();
        }
      }

      return new Ice_Lance(this, target);

    }

    // if we reach here nobody was frozen
    // Just cast frost bolt on the enemy with lowest health
    double lowest_health = 2;
    Player* target = nullptr;
    for(Player* player : players) {
        if(player->get_health_precent() < lowest_health && player->is_dead()!=true) {
          target = player;
          lowest_health = player->get_health_precent();
        }
    }

    // if we got no target. Return a new pass
    if(target == nullptr) {
      return new Pass(this,this);
    }

    // cast a Frostbolt
    return new Frostbolt(this, target);
  }
}
