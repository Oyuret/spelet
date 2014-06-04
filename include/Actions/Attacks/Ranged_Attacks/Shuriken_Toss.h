#ifndef SHURIKEN_TOSS_H_INCLUDED
#define SHURIKEN_TOSS_H_INCLUDED

#include "../Ranged_Attack.h"

namespace lab3 {
  using namespace std;

  class Shuriken_Toss : public Ranged_Attack {
  public:
    Shuriken_Toss(Actor* source, Actor* target) { _name = "shuriken_toss"; _source=source; _target=target; _damage = balance::_dmg_table[_name];}
    virtual ~Shuriken_Toss() {}
  private:
  protected:

  };
}


#endif // SHURIKEN_TOSS_H_INCLUDED
