#include "../Debuff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Sheeped : public Debuff {
    public:
      Sheeped() { _name = "Sheeped"; _duration=10; }
      ~Sheeped() {}

      virtual const string get_description() const;

      virtual bool can_perform(const Action* attack) const;
      virtual bool check_immunity(const Action* action) const;
    private:
  };
  
}
