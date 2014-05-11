#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED

#include <string>
#include <iostream>
#include <sstream>
#include "../../include/Tools/Random.h"
#include "../Tools/Balance.h"

namespace lab3 {


  using namespace std;
  class Actor;

  class Action {
    public:
      Action() {}
      Action(string name, Actor* source, Actor* target) : _name(name),
                                    _source(source), _target(target) {}
      virtual const string get_description() const { return "This is a bogus description"; }

      // execute the action
      virtual const string perform(Random& ran) { return "This is bogus"; }

      virtual ~Action() {}

    private:

    protected:
      ostringstream _ss;
      string _name;
      Actor* _source;
      Actor* _target;

      virtual void calculate_action(Random& ran) {}
      virtual void apply_collaterals(Random& ran) {}
  };
}

#endif // ACTION_H_INCLUDED
