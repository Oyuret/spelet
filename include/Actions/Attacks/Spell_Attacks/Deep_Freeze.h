#ifndef DEEP_FREEZE_H_INCLUDED
#define DEEP_FREEZE_H_INCLUDED

#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Deep_Frozen.h"

namespace lab3 {
  using namespace std;

  class Deep_Frozen;

  class Deep_Freeze : public Spell_Attack {
    public:
      Deep_Freeze(Actor* source, Actor* target) { _name="deep_freeze"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual ~Deep_Freeze() {}

    private:
    protected:
      virtual void calculate_action(Random& ran) {}
      virtual void apply_collaterals(Random& ran);
      virtual void apply_dmg() {}
  };
}

#endif // DEEP_FREEZE_H_INCLUDED
