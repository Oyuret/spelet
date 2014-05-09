#ifndef BUFF_H_INCLUDED
#define BUFF_H_INCLUDED

#include "Status_Effect.h"

namespace lab3 {
  using namespace std;

  class Buff : public Status_Effect {
    public:
      Buff() {}
      virtual ~Buff() {}
  };
 }

#endif // BUFF_H_INCLUDED
