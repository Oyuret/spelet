#pragma once
#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {
  using namespace std;

  class Frozen;
  
  class Ice_Lance : public Spell_Attack {
    public:
      Ice_Lance(Actor* source, Actor* target) { _name="Ice Lance"; _source = source; _target=target; _damage=25; }
      const string get_description() const;
    private:
  };
}