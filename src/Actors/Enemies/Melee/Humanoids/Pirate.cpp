#include "../../../../../include/Actors/Enemies/Melee/Humanoids/Pirate.h"
#include "../../../../../include/Actions/Attacks/Melee_Attacks/Shank.h"
#include "../../../../../include/Actions/Attacks/Ranged_Attacks/Bottle_Toss.h"
#include "../../../../../include/Actions/Pass.h"

namespace lab3 {

  Action* Pirate::pick_action(list<Player*>& players, list<Enemy*>& enemies) {

    double lowest_health = 2;
    Player* target = nullptr;

    // find the living player with lowest health
    for(Player* player : players) {
      if((player->get_health_precent() < lowest_health) && (player->is_dead()!=true) ) {
        target = player;
        lowest_health = player->get_health_precent();
      }
    }

    // check if we got any target
    if(target == nullptr) {
      return new Pass(this,this);
    }


    // check if we are Frozen
    if(get_debuffs().find("Frozen")!=get_debuffs().end()) {
      return new Bottle_Toss(this,target);
    } else {
      return new Shank(this,target);
    }
  }

}
