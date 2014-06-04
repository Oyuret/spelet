#ifndef KATANA_SLICE_H_INCLUDED
#define KATANA_SLICE_H_INCLUDED

#include "../Melee_Attack.h"

namespace lab3 {
  using namespace std;

  class Katana_Slice : public Melee_Attack {
  public:
    Katana_Slice(Actor* source, Actor* target) { _name = "katana_slice"; _source=source; _target=target; _damage = balance::_dmg_table[_name];}
    virtual ~Katana_Slice() {}
  private:
  protected:

  };
}


#endif // KATANA_SLICE_H_INCLUDED
