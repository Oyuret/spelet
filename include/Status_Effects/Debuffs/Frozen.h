#include "../Debuff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Frozen : public Debuff {
    public:
      Frozen(size_t duration) { _name = "Frozen"; _duration =duration; }

      virtual void on_attack(Actor& target);
      virtual void on_dmg(string source);
      virtual void on_end(Actor& target);
    private:
  };
  
}
