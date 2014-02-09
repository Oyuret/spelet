#include "include\Actors\Enemies\Melee\Humanoids\Pirate.h"
#include "include\Actors\Player\Player.h"
#include "include\Actions\Attacks\Spell_Attacks\Frostbolt.h"
#include "include\Actions\Defensive\Buffing_Ability\Buffing_Spells\Ice_Block.h"
#include "include\Status_Effects\Buffs\Frozen_Armor.h"
#include "include\Status_Effects\Debuffs\Sheeped.h"
#include "include\Actions\Attacks\Spell_Attack.h"
#include "../lab3/include/Tools/Random.h"
#include <functional>

using namespace lab3;
using namespace std;


int main() {

  // TODO: Fixa engine. Re-do hela attack/buff/debuff.
  // TODO: buff/debuff: is_immune, on_dmg

  Random ran;

  Player me("Yuri", "Magikern från berga");
  Pirate enemy;

  Frostbolt f1(&me, &enemy);
  Frostbolt f2(&me, &enemy);

  cout << me.get_status() << endl;
  
  cout << f1.perform(ran) << endl;

  cout << enemy.get_status() << endl;

  cout << f1.perform(ran) << endl;

  cout << enemy.get_status() << endl;

  cout << f1.perform(ran) << endl;

  cout << enemy.get_status() << endl;

  cout << f1.perform(ran) << endl;

  cout << enemy.get_status() << endl;
  
  

  system("pause");
  return 0;
}

