#include "../Buff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;

  class Frozen_Armor : public Buff {
    public:
      Frozen_Armor() : _armor(50) { _name = "Frozen Armor";}

      virtual void on_attack(Actor& target);
      virtual void on_dmg(Attack* action);
      virtual void on_end(Actor& target);
      virtual const string get_description() const;

      // combat stuff
      virtual bool check_immunity(const Action* action) const;
    private:
      int _armor;
  };
  
}
