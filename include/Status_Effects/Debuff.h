#ifndef DEBUFF_H_INCLUDED
#define DEBUFF_H_INCLUDED


#include "Status_Effect.h"

namespace lab3 {
  using namespace std;

  class Debuff : public Status_Effect {
    public:
      Debuff() {}
      virtual ~Debuff() {}
  };
 }

#endif // DEBUFF_H_INCLUDED
