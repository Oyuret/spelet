#pragma once
#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {
  using namespace std;

  class Frozen;
  
  class Frostbolt : public Spell_Attack {
    public:
      Frostbolt(Actor* source, Actor* target) { _name="Silence"; _source = source; _target=target; _damage=30; }
      const string get_description() const;
    private:
  };
}