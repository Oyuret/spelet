#include "include\Actors\Enemies\Melee\Humanoids\Pirate.h"
#include "include\Actors\Player\Player.h"
#include "include\Actions\Attacks\Spell_Attacks\Frostbolt.h"
#include "include\Actions\Attacks\Spell_Attacks\Ice_Lance.h"
#include "include\Actions\Defensive\Buffing_Ability\Buffing_Spells\Ice_Block.h"
#include "include\Status_Effects\Buffs\Frozen_Armor.h"
#include "include\Status_Effects\Debuffs\Sheeped.h"
#include "include\Actions\Attacks\Spell_Attack.h"
#include "../lab3/include/Tools/Random.h"
#include "include\Actions\Action.h"
#include <functional>
#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace lab3;
using namespace std;

int main() {

  Pirate enemy;
  Player me("Yuri", "Magikern från berga");

  std::map<std::string, std::function<Action*(Actor*,Actor*)>> spells;

  spells["frostbolt"] = [] (Actor* from, Actor* to) -> Action* {return new Frostbolt(from, to);};
  spells["icelance"] = [] (Actor* from, Actor* to) -> Action* {return new Ice_Lance(from, to);};

  Random ran;

  Action* frost = spells["frostbolt"](&me, &enemy);

  cout << frost->get_description() << endl;
  cout << frost->perform(ran)<<endl;
  
  


  
  system("pause");
  return 0;
}

