#ifndef FROZEN_ARMOR_H_INCLUDED
#define FROZEN_ARMOR_H_INCLUDED

#include "../Buff.h"
#include "../../Actors/Actor.h"
#include "../Shield.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Frozen_Armor : public Buff, public Shield {
    public:
      Frozen_Armor() { _name = "Frozen Armor"; _armor = balance::_utility_spells[_name];}
      virtual ~Frozen_Armor() {}

      virtual const string get_description() const;

      // combat stuff
      virtual bool check_immunity(const Action* action) const;
    private:
  };

}

#endif // FROZEN_ARMOR_H_INCLUDED
