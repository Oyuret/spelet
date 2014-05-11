#ifndef FROST_NOVA_H_INCLUDED
#define FROST_NOVA_H_INCLUDED

#include "../Spell_Attack.h"
#include "../../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {
  using namespace std;

  class Frozen;

  class Frost_Nova : public Spell_Attack {
    public:
      Frost_Nova(Actor* source, Actor* target) { _name="Frost Nova"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual const string get_description() const;
      virtual ~Frost_Nova() {}
    private:
  };
}

#endif // FROST_NOVA_H_INCLUDED
