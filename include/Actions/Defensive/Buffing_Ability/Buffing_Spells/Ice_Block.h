#pragma once
#include "../Buffing_Ability.h"
#include "../../../../Status_Effects/Buffs/Iceberged.h"

namespace lab3 {
  using namespace std;

  class Iceberged;
  
  class Ice_Block : public Buffing_Ability {
    public:
      Ice_Block(Actor* source, Actor* target) { _name="Ice Block"; _source = source; _target=target; }
      const string get_description() const;

    private:
  };
}