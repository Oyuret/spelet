#ifndef ICEBERGED_H_INCLUDED
#define ICEBERGED_H_INCLUDED

#include "../Buff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;
  class Status_Effect;

  class Iceberged : public Buff {
    public:
      Iceberged() { _name = "Iceberged"; _armor=0;}
      virtual ~Iceberged() {}

      virtual const string get_description() const;

      // combat stuff
      virtual bool check_immunity(const Action* action) const;

    private:
      int _armor;
  };

}

#endif // ICEBERGED_H_INCLUDED
