#ifndef FROST_NOVA_H_INCLUDED
#define FROST_NOVA_H_INCLUDED

#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {
  using namespace std;

  class Frozen;

  class Frost_Nova : public Spell_Attack {
    public:
      Frost_Nova(Actor* source, Actor* target) { _name="frost_nova"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual ~Frost_Nova() {}
    private:
    protected:
      virtual void apply_collaterals(Random& ran);
  };
}

#endif // FROST_NOVA_H_INCLUDED
