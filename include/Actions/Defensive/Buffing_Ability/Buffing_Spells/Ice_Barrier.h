#ifndef ICE_BARRIER_H_INCLUDED
#define ICE_BARRIER_H_INCLUDED


#include "../Buffing_Ability.h"
#include "../../../../Status_Effects/Buffs/Frozen_Armor.h"

namespace lab3 {
  using namespace std;

  class Frozen;

  class Ice_Barrier : public Buffing_Ability {
    public:
      Ice_Barrier(Actor* source, Actor* target) { _name="ice_barrier"; _source = source;
        _target=target; }
      virtual ~Ice_Barrier() {}
    private:
    protected:
      virtual void apply_collaterals(Random& ran);
  };
}

#endif // ICE_BARRIER_H_INCLUDED
