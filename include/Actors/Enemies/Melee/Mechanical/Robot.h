#pragma once
#include "../Melee.h"

namespace lab3 {
  using namespace std;

  class Robot : public Melee {
    public:
      Robot() {_name="Robot"; _description="A freaking robot!"; _health=200;}
    private:
    protected:
  };
 }