#pragma once
#include "../Actor.h"

namespace lab3 {
  using namespace std;
  class Player : public Actor {
    public:
      Player(string name, string description) {_name=name, _description=description; _health = 200;}
    private:
    protected:
  };
}