#pragma once
#include "../Spell_Attack.h"
#include "../../../Status_Effects/Debuffs/Sheeped.h"

namespace lab3 {
  using namespace std;

  class Sheeped;
  
  class Polymorph : Spell_Attack {
    public:
      Polymorph(Actor* source, Actor* target) { _name="Polymorph"; _source = source; _target=target; _damage=0; }
      virtual const string get_description() const;
    private:
  };
}