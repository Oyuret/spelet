#pragma once
#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Pirate : public Melee {
    public:
      Pirate() {_name="Pirate"; _description="Yarr! A nasty pirate!"; _health = 100; _max_health = 100; }
  };
 }
