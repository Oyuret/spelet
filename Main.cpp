#include "include\Actors\Enemies\Melee\Humanoids\Pirate.h"
#include "include\Actors\Enemies\Melee\Humanoids\Ninja.h"
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

  Ninja enemy("Ninja", 200);
  White_Mage healer("Priest",200);
  Black_Mage enemy2("Sorcerer", 200);
  Sorcerer me("Yuri", "Magikern från berga");
  Healer meme("Yuri2", "Healern från berga");

  list<Player*> players;
  list<Enemy*> enemies;

  players.push_back(&me);
  players.push_back(&meme);
  enemies.push_back(&healer);
  enemies.push_back(&enemy);


  Random ran;


  enemy.add_debuff(new Frozen());

  cout << enemy.get_status() << endl;

  unique_ptr<Action> ptr1(me.cast_spell("deep_freeze",&enemy));
  cout << ptr1->perform(ran) << endl;

  unique_ptr<Action> ptr(me.cast_spell("ice_lance",&enemy));
  cout << ptr->perform(ran) << endl;



  cout << enemy.get_status() << endl;

  unique_ptr<Action> ptr2(me.cast_spell("polymorph",&enemy));
  cout << ptr2->perform(ran) << endl;

  unique_ptr<Action> ptr5(meme.cast_spell("silence",&enemy));
  cout << ptr5->perform(ran) << endl;

  unique_ptr<Action> ptr4(meme.cast_spell("smite",&enemy));
  cout << ptr4->perform(ran) << endl;

  cout << enemy.get_status() << endl;

  unique_ptr<Action> ptr20(new Dispell(&enemy,&enemy));
  cout << ptr20->perform(ran) << endl;

  unique_ptr<Action> ptr3(enemy.pick_action(players,enemies));
  cout << ptr3->perform(ran) << endl;

  unique_ptr<Action> ptr17(new Ice_Block(&enemy,&enemy));
  cout << ptr17->perform(ran) << endl;

  cout << enemy.get_status() << endl;

  cout << enemy.turn_start() << endl;

  cout << enemy.get_status() << endl;

  unique_ptr<Action> ptr15(new Heal(&enemy,&enemy));
  cout << ptr15->perform(ran) << endl;

  unique_ptr<Action> ptr21(new Dispell(&enemy,&enemy));
  cout << ptr21->perform(ran) << endl;

  enemy.add_debuff(new Frozen());

  unique_ptr<Action> ptr22(new Dispell(&enemy,&enemy));
  cout << ptr22->perform(ran) << endl;

  cout << enemy.get_status() << endl;

  cout << "Jag är här" << endl;
  system("pause");
  return 0;
}

