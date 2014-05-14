#ifndef ICE_LANCE_H_INCLUDED
#define ICE_LANCE_H_INCLUDED

#include "../Spell_Attack.h"

namespace lab3 {
  using namespace std;

  class Ice_Lance : public Spell_Attack {
    public:
      Ice_Lance(Actor* source, Actor* target) { _name="Ice Lance"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual const string get_description() const;

      virtual ~Ice_Lance() {}
    private:
    protected:
      virtual void apply_collaterals(Random& ran);
  };
}

#endif // ICE_LANCE_H_INCLUDED
