#pragma once
#include "../Defensive_Spell.h"

namespace lab3 {
  class Healing_Spell : public Defensive_Spell {
    public:
      Healing_Spell() {}
      size_t get_healing_power() const {return _healing_power;}
      void get_healing_power(size_t heal_pwr) {_healing_power=heal_pwr;}
    private:
    protected:
      size_t _healing_power;
  };
}