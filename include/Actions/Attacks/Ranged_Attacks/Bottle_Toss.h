#ifndef BOTTLE_TOSS_H_INCLUDED
#define BOTTLE_TOSS_H_INCLUDED

#include "../Ranged_Attack.h"

namespace lab3 {
  using namespace std;

  class Bottle_Toss : public Ranged_Attack {
  public:
    Bottle_Toss(Actor* source, Actor* target) { _name = "bottle_toss"; _source=source; _target=target; _damage = balance::_dmg_table[_name];}
    virtual ~Bottle_Toss() {}
  private:
  protected:

  };
}


#endif // BOTTLE_TOSS_H_INCLUDED
