#ifndef PIRATE_H_INCLUDED
#define PIRATE_H_INCLUDED

#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Pirate : public Melee {
    public:
      Pirate(string name) {_name=name; _description="Yarr! A nasty pirate!";
                                        _health = _max_health = balance::_health_tables["Pirate"]; }


      virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies);
      virtual ~Pirate() {}
  };
 }

#endif // PIRATE_H_INCLUDED
