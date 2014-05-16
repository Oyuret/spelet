#ifndef SHANK_H_INCLUDED
#define SHANK_H_INCLUDED

#include "../Melee_Attack.h"

namespace lab3 {
  using namespace std;

  class Shank : public Melee_Attack {
  public:
    Shank(Actor* source, Actor* target) { _name = "Shank"; _source=source; _target=target; _damage = balance::_dmg_table[_name];}
    virtual const string get_description() const;
    virtual ~Shank() {}
  private:
  protected:

  };
}

#endif // SHANK_H_INCLUDED
