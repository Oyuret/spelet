#ifndef MELEE_ATTACK_H_INCLUDED
#define MELEE_ATTACK_H_INCLUDED

#include "../Attack.h"
#include "../Close_Combat.h"
namespace lab3 {
  class Melee_Attack : public Attack, public Close_Combat {
    public:
      Melee_Attack() {}
      ~Melee_Attack() {}
    private:
  };
}

#endif // MELEE_ATTACK_H_INCLUDED
