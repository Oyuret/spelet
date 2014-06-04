#ifndef SMITE_H_INCLUDED
#define SMITE_H_INCLUDED

#include "../Spell_Attack.h"

namespace lab3 {
  using namespace std;

  class Smite : public Spell_Attack {
    public:
      Smite(Actor* source, Actor* target) { _name="smite"; _source = source; _target=target; _damage=balance::_dmg_table[_name]; }
      virtual const string get_description() const;

      virtual ~Smite() {}
    private:
    protected:
  };
}


#endif // SMITE_H_INCLUDED
