#ifndef MELEE_H_INCLUDED
#define MELEE_H_INCLUDED

#include "../Enemy.h"

namespace lab3 {
  using namespace std;

  class Melee : public Enemy {
    public:
      Melee() {}
      virtual ~Melee() {}
    private:
    protected:
  };
 }

#endif // MELEE_H_INCLUDED
