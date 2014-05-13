#include "include\Actors\Enemies\Melee\Humanoids\Pirate.h"
#include "include/Actors/Enemies/Ranged/Mages/White_Mage.h"
#include "include/Actors/Enemies/Ranged/Mages/Black_Mage.h"
#include "include\Actors\Player\Player.h"
#include "include\Actions\Attacks\Spell_Attacks\Frostbolt.h"
#include "include\Actions\Attacks\Spell_Attacks\Ice_Lance.h"
#include "include\Actions\Defensive\Buffing_Ability\Buffing_Spells\Ice_Block.h"
#include "include\Status_Effects\Buffs\Frozen_Armor.h"
#include "include\Status_Effects\Debuffs\Sheeped.h"
#include "include\Actions\Attacks\Spell_Attack.h"
#include "include/Tools/Random.h"
#include "include\Actions\Action.h"
#include "include/Actions/Defensive/Buffing_Ability/Buffing_Spells/Ice_Barrier.h"
#include <functional>
#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <memory>

using namespace lab3;
using namespace std;

int main() {

  Pirate enemy("Pirate", 200);
  White_Mage healer("Priest",200);
  Black_Mage sorcerer("Sorcerer", 200);
  Player me("Yuri", "Magikern från berga", 20000);

  list<Player*> players;
  list<Enemy*> enemies;

  players.push_back(&me);
  enemies.push_back(&healer);
  enemies.push_back(&enemy);


  std::map<std::string, std::function<Action*(Actor*,Actor*)>> spells;

  spells["frostbolt"] = [] (Actor* from, Actor* to) -> Action* {return new Frostbolt(from, to);};
  spells["icelance"] = [] (Actor* from, Actor* to) -> Action* {return new Ice_Lance(from, to);};
  spells["ice_barrier"] = [] (Actor* from, Actor* to) -> Action* {return new Ice_Barrier(from, to);};

  Random ran;


  for(int i=0; i<10; i++) {
    unique_ptr<Action> ptr(sorcerer.pick_action(players,enemies));
    cout <<ptr->perform(ran)<<endl;
  }


  cout << "Jag är här" << endl;
  system("pause");
  return 0;
}

