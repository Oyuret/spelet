#pragma once
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