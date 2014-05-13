#include "include\Actors\Enemies\Melee\Humanoids\Pirate.h"
#include "include/Actors/Enemies/Ranged/Mages/White_Mage.h"
#include "include/Actors/Enemies/Ranged/Mages/Black_Mage.h"
#include "include\Actors\Player\Player.h"
#include "include\Actors\Player\Sorcerer.h"
#include "include\Actors\Player\Healer.h"
#include "include\Actions\Attacks\Spell_Attacks\Frostbolt.h"
#include "include\Actions\Attacks\Spell_Attacks\Ice_Lance.h"
#include "include\Actions\Attacks\Spell_Attacks\Polymorph.h"
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
  Sorcerer me("Yuri", "Magikern från berga");
  Healer meme("Yuri2", "Healern från berga");

  list<Player*> players;
  list<Enemy*> enemies;

  players.push_back(&me);
  players.push_back(&meme);
  enemies.push_back(&healer);
  enemies.push_back(&enemy);


  Random ran;


  for(int i=0; i<10; i++) {
    unique_ptr<Action> ptr(sorcerer.pick_action(players,enemies));
    cout <<ptr->perform(ran)<<endl;
    unique_ptr<Action> spell(me.cast_spell("ice_barrier",&me));
    cout << spell->perform(ran) << endl;
    unique_ptr<Action> spell2(meme.cast_spell("absorb",&me));
    cout << spell2->perform(ran) << endl;
  }

  cout << me.get_status() << endl;


  cout << "Jag är här" << endl;
  system("pause");
  return 0;
}

