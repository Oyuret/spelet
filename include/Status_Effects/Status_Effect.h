#pragma once
#include <iostream>
#include <sstream>
#include "../Actions/Attack.h"

namespace lab3 {
  using namespace std;

  class Actor;
  class Attack;

  class Status_Effect {

    public:
      Status_Effect() {}
      Status_Effect(string name, size_t duration) : _name(name), _duration(duration) {}

      // battle actions
      virtual void on_apply(Actor& target);
      virtual void on_start(Actor& target);
      virtual void on_dmg(Attack* action);
      virtual void on_attack(Actor& target);
      virtual void on_end(Actor& target);

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