#pragma once
#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Deep_Frozen.h"

namespace lab3 {
  using namespace std;

  class Deep_Frozen;
  
  class Deep_Freeze : public Spell_Attack {
    public:
      Deep_Freeze(Actor* source, Actor* target) { _name="Deep Freeze"; _source = source; _target=target; _damage=0; }
      const string get_description() const;
    private:
  };
}