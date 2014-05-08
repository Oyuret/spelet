#pragma once
#include "Mage.h"

namespace lab3 {
  class Black_Mage : public Mage {
    public:
      Black_Mage() {_name="Sorcerer"; _description="A powerful Sorcerer"; _health = 75; _max_health = 75;}
      virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies);
    private:
  };
}
