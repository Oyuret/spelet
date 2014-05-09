#ifndef ICE_BARRIER_H_INCLUDED
#define ICE_BARRIER_H_INCLUDED


#include "../Buffing_Ability.h"
#include "../../../../Status_Effects/Buffs/Frozen_Armor.h"

namespace lab3 {
  using namespace std;

  class Frozen;

  class Ice_Barrier : public Buffing_Ability {
    public:
      Ice_Barrier(Actor* source, Actor* target) : _armor(50) { _name="Ice Barrier"; _source = source; _target=target; }
      virtual const string get_description() const;
      virtual const string perform(Random& ran);
      virtual ~Ice_Barrier() {}
    private:
      void apply_collaterals(Random& ran);

      int _armor;
  };
}

#endif // ICE_BARRIER_H_INCLUDED
