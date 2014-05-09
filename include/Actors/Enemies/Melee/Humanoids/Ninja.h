#ifndef NINJA_H_INCLUDED
#define NINJA_H_INCLUDED

#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Ninja : public Melee {
    public:
      Ninja(string name, int health) { _name=name; _description="A skillful ninja!"; _health = health; _max_health = health; }
      virtual ~Ninja() {}
    private:
    protected:
  };
 }

#endif // NINJA_H_INCLUDED
