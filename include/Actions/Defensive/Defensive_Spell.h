#ifndef DEFENSIVE_SPELL_H_INCLUDED
#define DEFENSIVE_SPELL_H_INCLUDED

#include "../Defensive.h"
#include "../Spell.h"

namespace lab3 {
  class Defensive_Spell : public Defensive, public Spell {
    public:
      Defensive_Spell() {}
      virtual ~Defensive_Spell() {}
    private:
  };
}

#endif // DEFENSIVE_SPELL_H_INCLUDED
