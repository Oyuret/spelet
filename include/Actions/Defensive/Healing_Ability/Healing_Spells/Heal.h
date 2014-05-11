#ifndef HEAL_H_INCLUDED
#define HEAL_H_INCLUDED

#include "../Healing_Spell.h"

namespace lab3 {
  using namespace std;

  class Heal : public Healing_Spell {
    public:
      Heal(Actor* source, Actor* target) { _name="Heal"; _source = source;
        _target=target; _healing_power=balance::_utility_spells[_name];}
      virtual const string get_description() const;
      virtual const string perform(Random& ran);

      virtual ~Heal() {}

    private:
      void calculate_action(Random& ran);
      void apply_collaterals(Random& ran);
    };
}

#endif // HEAL_H_INCLUDED
