#ifndef PIRATE_H_INCLUDED
#define PIRATE_H_INCLUDED

#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Pirate : public Melee {
    public:
      Pirate(string name, int health) {_name=name; _description="Yarr! A nasty pirate!";
                                        _health = health; _max_health = health; }


      virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies);
      virtual ~Pirate() {}
  };
 }

#endif // PIRATE_H_INCLUDED
