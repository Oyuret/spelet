#ifndef HEALER_H_INCLUDED
#define HEALER_H_INCLUDED

#include "Player.h"
#include "../../Actions/Attacks/Spell_Attacks/Silence.h"
#include "../../Actions/Attacks/Spell_Attacks/Smite.h"
#include "../../Actions/Defensive/Healing_Ability/Healing_Spells/Heal.h"
#include "../../Actions/Defensive/Supportive_Ability/Dispell.h"
#include "../../Actions/Defensive/Buffing_Ability/Buffing_Spells/Absorb.h"

#include <unordered_map>
#include <functional>

namespace lab3 {
  using namespace std;

  class Healer : public Player {
  public:
    Healer(string name, string description) : Player(name, description, balance::_classes_health["Healer"]) { _spells = &_healer_spells;}
    virtual ~Healer() {}
  private:
    unordered_map<string,function<Action*(Actor*,Actor*)>> _healer_spells {
     {"heal", [] (Actor* from, Actor* to) -> Action* {return new Heal(from, to);} },
     {"dispell", [] (Actor* from, Actor* to) -> Action* {return new Dispell(from, to);} },
     {"absorb", [] (Actor* from, Actor* to) -> Action* {return new Absorb(from, to);} },
     {"silence", [] (Actor* from, Actor* to) -> Action* {return new Silence(from, to);} },
     {"smite", [] (Actor* from, Actor* to) -> Action* {return new Smite(from, to);} },
   };
  protected:

  };
}


#endif // HEALER_H_INCLUDED
