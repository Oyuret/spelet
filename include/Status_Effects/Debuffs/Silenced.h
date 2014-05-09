#ifndef SILENCED_H_INCLUDED
#define SILENCE_H_INCLUDED


#include "../Debuff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Silenced : public Debuff {
    public:
      Silenced() { _name = "Silenced"; _duration=10; }
      virtual ~Silenced() {}

      virtual const string get_description() const;

      virtual bool can_perform(const Action* attack) const;
      virtual bool check_immunity(const Action* action) const;
    private:
  };

}

#endif // SILENCED_H_INCLUDED
