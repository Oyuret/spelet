#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Robot : public Melee {
    public:
      Robot(string name, int health) {_name=name; _description="A freaking robot!"; _health=health; _max_health = health;}
    private:
    protected:
  };
 }

#endif // ROBOT_H_INCLUDED
