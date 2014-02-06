#pragma once
#include "../Healing_Spell.h"

namespace lab3 {
  using namespace std;
  
  class Heal : public Healing_Spell {
    public:
      Heal(Actor* source, Actor* target) { _name="Heal"; _source = source; _target=target; _healing_power=25;}
      virtual const string get_description() const;

    private:
  };
}