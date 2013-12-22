#pragma once
#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Ninja : public Melee {
    public:
      Ninja() { _name="Ninja"; _description="A skillful ninja!"; _health = 100; }
    private:
    protected:
  };
 }