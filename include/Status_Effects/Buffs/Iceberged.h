#include "../Buff.h"
#include "../../Actors/Actor.h"

namespace lab3 {
  using namespace std;

  class Actor;
  class Status_Effect;

  class Iceberged : public Buff {
    public:
      Iceberged() { _name = "Iceberged"; _armor=0;}
      ~Iceberged() {}

      virtual const string get_description() const;

      // combat stuff
      virtual bool check_immunity(const Action* action) const;

    private:
      int _armor;
  };
  
}
