#ifndef NINJA_H_INCLUDED
#define NINJA_H_INCLUDED

#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Ninja : public Melee {
    public:
      Ninja(string name) { _name=name; _description="A skillful ninja!";
                                      _health = _max_health = balance::_health_tables["Ninja"]; }
      virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies);
      virtual ~Ninja() {}
    private:
    protected:
  };
 }

#endif // NINJA_H_INCLUDED
