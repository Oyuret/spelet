#pragma once
#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {
  using namespace std;

  class Frozen;
  
  class Cone_of_Cold : public Spell_Attack {
    public:
      Cone_of_Cold(Actor* source, Actor* target) { _name="Cone of Cold"; _source = source; _target=target; _damage=20; }
      virtual const string get_description() const;
    private:
  };
}