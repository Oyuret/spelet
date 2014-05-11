#ifndef KATANA_SLICE_H_INCLUDED
#define KATANA_SLICE_H_INCLUDED

#include "../Melee_Attack.h"

namespace lab3 {
  using namespace std;

  class Katana_Slice : public Melee_Attack {
  public:
    Katana_Slice(Actor* source, Actor* target) { _name = "Katana Slice"; _source=source; _target=target; }
    virtual const string get_description() const;
    virtual const string perform(Random& ran);
    virtual ~Katana_Slice() {}
  private:
  protected:

  };
}


#endif // KATANA_SLICE_H_INCLUDED
