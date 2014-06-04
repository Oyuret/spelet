#ifndef SILENCE_H_INCLUDED
#define SILENCE_H_INCLUDED

#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Silenced.h"

namespace lab3 {
  using namespace std;

  class Silenced;

  class Silence : public Spell_Attack {
    public:
      Silence(Actor* source, Actor* target) { _name="silence"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual ~Silence() {}
    private:
    protected:
      virtual void calculate_action(Random& ran) {}
      virtual void apply_collaterals(Random& ran);
      virtual void apply_dmg() {}
  };
}

#endif // SILENCE_H_INCLUDED
