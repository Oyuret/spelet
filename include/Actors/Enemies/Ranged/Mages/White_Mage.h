#pragma once
#include "Mage.h"

namespace lab3 {
  class White_Mage : public Mage {
    public:
      White_Mage() {_name="Priest"; _description="A dedicated healer"; _health = 75; _max_health = 75;}
      virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies);
    private:
  };
}
