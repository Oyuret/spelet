#ifndef FROSTBOLT_H_INCLUDED
#define FROSTBOLT_H_INCLUDED

#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {
  using namespace std;

  class Frozen;

  class Frostbolt : public Spell_Attack {
    public:
      Frostbolt(Actor* source, Actor* target) { _name="frostbolt"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual ~Frostbolt() {}
    private:
    protected:
      virtual void apply_collaterals(Random& ran);
  };
}

#endif // FROSTBOLT_H_INCLUDED

