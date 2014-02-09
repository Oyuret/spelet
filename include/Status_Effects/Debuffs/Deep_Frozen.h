#include "../Debuff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Deep_Frozen : public Debuff {
    public:
      Deep_Frozen() { _name = "Frozen"; _duration=10; }
      ~Deep_Frozen() {}

      virtual const string get_description() const;

      virtual bool can_perform(const Action* attack) const;
      virtual bool check_immunity(const Action* action) const;
    private:
  };
  
}
