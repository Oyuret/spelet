#ifndef BLACK_MAGE_INCLUDED
#define BLACK_MAGE_INCLUDED


#include "Mage.h"

namespace lab3 {
  class Black_Mage : public Mage {
    public:
      Black_Mage(string name, int health) {_name=name; _description="A powerful Sorcerer"; _health = health; _max_health = health;}
      virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies);
      virtual ~Black_Mage() {}
    private:
  };
}

#endif // BLACK_MAGE_INCLUDED
