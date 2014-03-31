#pragma once
#include "../Spell_Attack.h"

namespace lab3 {
  using namespace std;
  
  class Ice_Lance : public Spell_Attack {
    public:
      Ice_Lance(Actor* source, Actor* target) { _name="Ice Lance"; _source = source; _target=target; _damage=25; }
      virtual const string get_description() const;

      virtual const string perform(Random& ran);
    private:
    protected:
      virtual void calculate_action(Random& ran);
      virtual void apply_collaterals(Random& ran);
  };
}