#include "../Buff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Frozen_Armor : public Buff {
    public:
      Frozen_Armor() : _armor(50) { _name = "Frozen Armor";}
      ~Frozen_Armor() {}

      virtual const string get_description() const;

      // combat stuff
      virtual bool check_immunity(const Action* action) const;
    private:
      int _armor;
  };
  
}
