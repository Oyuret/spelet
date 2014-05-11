#ifndef RANGED_ATTACK_H_INCLUDED
#define RANGED_ATTACK_H_INCLUDED

#include "../Attack.h"
#include "../Ranged_Combat.h"
namespace lab3 {
  class Ranged_Attack : public Attack, public Ranged_Combat {
    public:
      Ranged_Attack() {}
      ~Ranged_Attack() {}
    private:
  };
}


#endif // RANGED_ATTACK_H_INCLUDED
