#pragma once
#include "../Healing_Spell.h"
#include "../../../../Status_Effects/Buffs/Iceberged.h"

namespace lab3 {
  using namespace std;

  class Iceberged;
  
  class Heal : public Healing_Spell {
    public:
      Heal(Actor* source, Actor* target) { _name="Heal"; _source = source; _target=target; _healing_power=25;}
      const string get_description() const;

    private:
  };
}