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
#include <functional>
#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <list>

using namespace lab3;
using namespace std;

int main() {

  Pirate enemy;
  White_Mage healer;
  Black_Mage sorcerer;
  Player me("Yuri", "Magikern från berga", 20000);

  list<Player*> players;
  list<Enemy*> enemies;

  players.push_back(&me);
  enemies.push_back(&healer);
  enemies.push_back(&enemy);


  std::map<std::string, std::function<Action*(Actor*,Actor*)>> spells;

  spells["frostbolt"] = [] (Actor* from, Actor* to) -> Action* {return new Frostbolt(from, to);};
  spells["icelance"] = [] (Actor* from, Actor* to) -> Action* {return new Ice_Lance(from, to);};

  Random ran;

  Action* frost = spells["frostbolt"](&me, &enemy);

  cout << me.can_perform(frost) << endl;
  cout << enemy.is_immune(frost) << endl;
  cout << frost->get_description()<<endl;
  cout << frost->perform(ran)<<endl;

  cout << enemy.get_status() << endl;

  Action* test = healer.pick_action(players, enemies);

  cout << healer.can_perform(test)<<endl;
  cout << enemy.is_immune(test)<<endl;

  cout << test->get_description()<<endl;
  cout << test->perform(ran)<<endl;

   cout << enemy.get_status() << endl;

   Action* test2 = sorcerer.pick_action(players, enemies);

   for(int i =0; i<10; i++) {
    test2 = sorcerer.pick_action(players, enemies);

    cout << test2->get_description()<<endl;
    cout << test2->perform(ran)<<endl;
   }


  system("pause");
  return 0;
}

