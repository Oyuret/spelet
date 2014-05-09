#ifndef DISPELL_H_INCLUDED
#define DISPELL_H_INCLUDED

#include "../Defensive_Spell.h"

namespace lab3 {
  using namespace std;

  class Dispell : public Defensive_Spell {
    public:
      Dispell(Actor* source, Actor* target) { _name="Dispell"; _source = source; _target=target; }
      virtual const string get_description() const;
      virtual const string perform(Random& ran);

      virtual ~Dispell() {}
    private:
  };
}

#endif // DISPELL_H_INCLUDED
