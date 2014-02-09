#include "../Debuff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Frozen : public Debuff {
    public:
      Frozen() { _name = "Frozen"; _duration=10; }
      ~Frozen() {}

      virtual const string get_description() const;

      virtual bool can_perform(const Action* attack) const;
      virtual bool check_immunity(const Action* action) const;
    private:
  };
  
}
