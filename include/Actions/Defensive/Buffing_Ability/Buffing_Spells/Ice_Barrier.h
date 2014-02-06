#pragma once
#include "../Buffing_Ability.h"
#include "../../../../Status_Effects/Buffs/Frozen_Armor.h"

namespace lab3 {
  using namespace std;

  class Frozen;
  
  class Ice_Barrier : public Buffing_Ability {
    public:
      Ice_Barrier(Actor* source, Actor* target) : _armor(50) { _name="Ice Barrier"; _source = source; _target=target; }
      const string get_description() const;
    private:
      int _armor;
  };
}