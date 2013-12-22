#pragma once
#include <string>
//#include "../Actors/Actor.h"

namespace lab3 {
  using namespace std;
  class Actor;
  class Action {
    public:
      Action() {}
      Action(string name, Actor* source, Actor* target) : _name(name), 
                                    _source(source), _target(target) {}
    private:
      
    protected:
      string _name;
      Actor* _source;
      Actor* _target;
  };
}