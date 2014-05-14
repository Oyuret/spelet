#ifndef FROZEN_H_INCLUDED
#define FROZEN_H_INCLUDED

#include "../Debuff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Frozen : public Debuff {
    public:
      Frozen() { _name = "Frozen"; _duration=10; }
      virtual ~Frozen() {}

      virtual const string get_description() const;

      virtual const Status_Effect* can_perform(const Action* attack) const;

      virtual void on_dmg(Attack* attack);
    private:
  };

}

#endif // FROZEN_H_INCLUDED
