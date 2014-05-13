#ifndef SMITE_H_INCLUDED
#define SMITE_H_INCLUDED

#include "../Spell_Attack.h"

namespace lab3 {
  using namespace std;

  class Smite : public Spell_Attack {
    public:
      Smite(Actor* source, Actor* target) { _name="Smite"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual const string get_description() const;

      virtual const string perform(Random& ran);

      virtual ~Smite() {}
    private:
    protected:
      virtual void calculate_action(Random& ran);
      virtual void apply_collaterals(Random& ran);
  };
}


#endif // SMITE_H_INCLUDED
