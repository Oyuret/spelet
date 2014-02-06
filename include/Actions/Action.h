#pragma once
#include <string>
#include <iostream>
#include <sstream>

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
      virtual void perform() {}

    private:
      
    protected:
      string _name;
      Actor* _source;
      Actor* _target;
  };
}