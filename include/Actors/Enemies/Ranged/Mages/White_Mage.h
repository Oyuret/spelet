#ifndef WHITE_MAGE_INCLUDED
#define WHITE_MAGE_INCLUDED

#include "Mage.h"

namespace lab3 {
  class White_Mage : public Mage {
    public:
      White_Mage(string name, int health) {_name=name; _description="A dedicated healer"; _health = health; _max_health = health;}
      virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies);
      virtual ~White_Mage() {}
    private:
  };
}

#endif // WHITE_MAGE_INCLUDED
