#pragma once
#include <iostream>
#include <sstream>
#include "../Actions/Attack.h"
#include "../Actions/Defensive.h"
#include "../Actions/Action.h"
#include "../Actions/Attacks/Melee_Attack.h"
#include "../Actions/Attacks/Spell_Attack.h"

namespace lab3 {
  using namespace std;

  class Actor;
  class Attack;
  class Action;
  class Spell_Attack;
  class Melee_Attack;

  class Status_Effect {

    public:
      Status_Effect() {}
      Status_Effect(string name, size_t duration) : _name(name), _duration(duration) {}

      // turn actions
      virtual void on_turn_start() {}
      virtual void on_turn_end() {}

      // combat actions
      virtual void on_dmg(Action* action) const {}
      //virtual void on_dmg(Attack* action) const {}
      //virtual void on_dmg(Defensive* action) const {}
      

      // before we get attacked checks
      virtual bool check_immunity(const Action* action) const;

      // before we attack checks
      virtual bool can_perform(const Action* action) const;

      // getters
      const size_t get_duration() const;
      virtual const string get_description() const;

      const string get_name() const;
      virtual ~Status_Effect() {}
    private:
     

    protected:
      size_t _duration;
      string _name;
      void decrease_duration();
  };
 }