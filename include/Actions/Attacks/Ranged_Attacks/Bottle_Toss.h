#ifndef BOTTLE_TOSS_H_INCLUDED
#define BOTTLE_TOSS_H_INCLUDED

#include "../Ranged_Attack.h"

namespace lab3 {
  using namespace std;

  class Bottle_Toss : public Ranged_Attack {
  public:
    Bottle_Toss(Actor* source, Actor* target) { _name = "Bottle Toss"; _source=source; _target=target; _damage = balance::_dmg_table[_name];}
    virtual const string get_description() const;
    virtual const string perform(Random& ran);
    virtual ~Bottle_Toss() {}
  private:
  protected:

  };
}


#endif // BOTTLE_TOSS_H_INCLUDED