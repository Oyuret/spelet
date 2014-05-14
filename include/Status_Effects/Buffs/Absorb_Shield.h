#ifndef ABSORB_SHIELD_H_INCLUDED
#define ABSORB_SHIELD_H_INCLUDED


#include "../Buff.h"
#include "../../Actors/Actor.h"
#include "../Shield.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Absorb_Shield : public Buff, public Shield {
    public:
      Absorb_Shield() { _name = "Absorb Shield"; _armor = balance::_utility_spells[_name];}
      virtual ~Absorb_Shield() {}

      virtual const string get_description() const;
    private:
  };

}


#endif // ABSORB_SHIELD_H_INCLUDED
