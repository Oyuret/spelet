#pragma once
#include "../Attack.h"
#include "../Spell.h"
namespace lab3 {
  class Spell_Attack : public Attack , public Spell {
    public:
      Spell_Attack() {}
      ~Spell_Attack() {}
    private:
  };
}