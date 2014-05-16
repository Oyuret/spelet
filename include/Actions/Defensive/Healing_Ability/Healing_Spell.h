#ifndef HEALING_SPELL_H_INCLUDED
#define HEALING_SPELL_H_INCLUDED

#include "../Defensive_Spell.h"

namespace lab3 {
  class Healing_Spell : public Defensive_Spell {
    public:
      Healing_Spell() {}
      size_t get_healing_power() const {return _healing_power;}
      void get_healing_power(size_t heal_pwr) {_healing_power=heal_pwr;}

      virtual ~Healing_Spell() {}
    private:
    protected:
      virtual void calculate_action(Random& ran);
      virtual void apply_dmg();
      size_t _healing_power;
  };
}

#endif // HEALING_SPELL_H_INCLUDED
