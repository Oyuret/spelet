#pragma once
#include "../Actor.h"

namespace lab3 {
  using namespace std;
  class Player : public Actor {
    public:
      Player(string name, string description, int health) {_name=name, _description=description; _health = health; _max_health = health;}
    private:
    protected:
  };
}
