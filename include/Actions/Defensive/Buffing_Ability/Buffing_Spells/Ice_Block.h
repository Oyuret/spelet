#ifndef ICE_BLOCK_H_INCLUDED
#define ICE_BLOCK_H_INCLUDED

#include "../Buffing_Ability.h"
#include "../../../../Status_Effects/Buffs/Iceberged.h"

namespace lab3 {
  using namespace std;

  class Iceberged;

  class Ice_Block : public Buffing_Ability {
    public:
      Ice_Block(Actor* source, Actor* target) { _name="Ice Block"; _source = source; _target=target; }
      virtual const string get_description() const;

      virtual ~Ice_Block() {}

    private:
      virtual void apply_collaterals(Random& ran);
  };
}

#endif // ICE_BLOCK_H_INCLUDED
