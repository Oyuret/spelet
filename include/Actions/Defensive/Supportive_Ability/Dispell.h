#ifndef DISPELL_H_INCLUDED
#define DISPELL_H_INCLUDED

#include "../Defensive_Spell.h"

namespace lab3 {
  using namespace std;

  class Dispell : public Defensive_Spell {
    public:
      Dispell(Actor* source, Actor* target) { _name="Dispell"; _source = source; _target=target; }
      virtual const string get_description() const;

      virtual ~Dispell() {}
    private:
    protected:
      virtual void calculate_action(Random& ran) {}
      virtual void apply_collaterals(Random& ran);
      virtual void apply_dmg() {}
  };
}

#endif // DISPELL_H_INCLUDED
