#ifndef PASS_H_INCLUDED
#define PASS_H_INCLUDED

#include "Action.h"
namespace lab3 {

  class Pass : public Action {
    public:
      Pass(Actor* from, Actor* to) {_source = from; _target = to;}
      virtual const string perform(Random& ran) {
        _ss << _source->get_name() <<" has nothing to do!" << endl;
        return _ss.str();
      }
      virtual ~Pass() {}
    private:
    protected:
  };
}

#endif // PASS_H_INCLUDED
