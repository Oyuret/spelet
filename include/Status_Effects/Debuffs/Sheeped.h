#ifndef SHEEPED_H_INCLUDED
#define SHEEPED_H_INCLUDED

#include "../Debuff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Sheeped : public Debuff {
    public:
      Sheeped() { _name = "Sheeped"; _duration=10; }
      virtual ~Sheeped() {}

      virtual const string get_description() const;

      virtual const Status_Effect* can_perform(const Action* attack) const;
    private:
  };

}

#endif // SHEEPED_H_INCLUDED
