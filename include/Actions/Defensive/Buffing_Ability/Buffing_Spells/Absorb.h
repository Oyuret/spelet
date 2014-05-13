#ifndef ABSORB_H_INCLUDED
#define ABSORB_H_INCLUDED

#include "../Buffing_Ability.h"
#include "../../../../Status_Effects/Buffs/Absorb_Shield.h"

namespace lab3 {
  using namespace std;

  class Absorb_Shield;

  class Absorb : public Buffing_Ability {
    public:
      Absorb(Actor* source, Actor* target) { _name="Absorb"; _source = source;
        _target=target; }
      virtual const string get_description() const;
      virtual const string perform(Random& ran);
      virtual ~Absorb() {}
    private:
      void apply_collaterals(Random& ran);
  };
}



#endif // ABSORB_H_INCLUDED
