#ifndef SORCERER_H_INCLUDED
#define SORCERER_H_INCLUDED
#include "Player.h"
#include "../../Actions/Attacks/Spell_Attacks/Frostbolt.h"
#include "../../Actions/Attacks/Spell_Attacks/Ice_Lance.h"
#include "../../Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.h"
#include "../../Actions/Attacks/Spell_Attacks/Polymorph.h"
#include "../../Actions/Attacks/Spell_Attacks/Cone_of_Cold.h"
#include "../../Actions/Attacks/Spell_Attacks/Deep_Freeze.h"
#include "../../Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Block.h"

#include <unordered_map>
#include <functional>

namespace lab3 {
  using namespace std;

  class Sorcerer : public Player {
  public:
    Sorcerer(string name, string description) : Player(name, description, balance::_classes_health["Sorcerer"]) { _spells = &_sorcerer_spells;}
    virtual ~Sorcerer() {}
  private:
    unordered_map<string,function<Action*(Actor*,Actor*)>> _sorcerer_spells {
     {"frostbolt", [] (Actor* from, Actor* to) -> Action* {return new Frostbolt(from, to);} },
     {"ice_lance", [] (Actor* from, Actor* to) -> Action* {return new Ice_Lance(from, to);} },
     {"ice_barrier", [] (Actor* from, Actor* to) -> Action* {return new Ice_Barrier(from, to);} },
     {"polymorph", [] (Actor* from, Actor* to) -> Action* {return new Polymorph(from, to);} },
     {"cone_of_cold", [] (Actor* from, Actor* to) -> Action* {return new Cone_of_Cold(from, to);} },
     {"deep_freeze", [] (Actor* from, Actor* to) -> Action* {return new Deep_Freeze(from, to);} } ,
     {"ice_block", [] (Actor* from, Actor* to) -> Action* {return new Ice_Block(from, from);} }
   };
  protected:

  };
}



#endif // SORCERER_H_INCLUDED
