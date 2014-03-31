#pragma once
#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Silenced.h"

namespace lab3 {
  using namespace std;

  class Silenced;
  
  class Silence : public Spell_Attack {
    public:
      Silence(Actor* source, Actor* target) { _name="Silence"; _source = source; _target=target; _damage=0; }
      virtual const string get_description() const;
      virtual const string perform(Random& ran);
    private:
    protected:
      virtual void calculate_action(Random& ran);
      virtual void apply_collaterals(Random& ran);
  };
}