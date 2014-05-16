#ifndef BUFFING_ABILITY_H_INCLUDED
#define BUFFING_ABILITY_H_INCLUDED

#include "../Defensive_Spell.h"

namespace lab3 {
  class Buffing_Ability : public Defensive_Spell {
    public:
      Buffing_Ability() {}
      virtual ~Buffing_Ability() {}
    private:
    protected:
      virtual void calculate_action(Random& ran) {}
      virtual void apply_dmg() {}

  };
}

#endif // BUFFING_ABILITY_H_INCLUDED
