#ifndef POLYMORPH_H_INCLUDED
#define POLYMORPH_H_INCLUDED

#include "../Spell_Attack.h"
#include "../../../Status_Effects/Debuffs/Sheeped.h"

namespace lab3 {
  using namespace std;

  class Sheeped;

  class Polymorph : public Spell_Attack {
    public:
      Polymorph(Actor* source, Actor* target) {_name = "Polymorph"; _source=source; _target=target; _damage=balance::_dmg_table[_name];}
      virtual const string get_description() const;

      virtual const string perform(Random& ran);
      virtual ~Polymorph() {}
    private:
    protected:
      virtual void calculate_action(Random& ran);
      virtual void apply_collaterals(Random& ran);
  };
}

#endif // POLYMORPH_H_INCLUDED

