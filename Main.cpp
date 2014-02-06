#include "include\Actors\Enemies\Melee\Humanoids\Pirate.h"
#include "include\Actors\Player\Player.h"
#include "include\Actions\Attacks\Spell_Attacks\Frost_Nova.h"
#include "include\Actions\Defensive\Buffing_Ability\Buffing_Spells\Ice_Block.h"
#include "include\Status_Effects\Buffs\Frozen_Armor.h"
#include "include\Status_Effects\Debuffs\Sheeped.h"
#include "include\Actions\Attacks\Spell_Attack.h"

using namespace lab3;
using namespace std;

int main() {

  // TODO: Fixa engine. Re-do hela attack/buff/debuff.
  // TODO: buff/debuff: is_immune, on_dmg

  Player me("Yuri", "Magikern från berga");
  Pirate enemy;

  enemy.add_buff(new Frozen_Armor());

  Frost_Nova attack(&me, &enemy);
  cout << "Can perform " << me.can_perform(&attack) << endl;
  cout << "Is immune " << enemy.is_immune(&attack) << endl;

  cout << enemy.get_status() << endl;

  cout << enemy.get_status() << endl;

  Sheeped* test = new Sheeped();
  enemy.add_debuff(test);
  cout << enemy.get_status() << endl;

  Frost_Nova * attack1 = new Frost_Nova(&me, &enemy);
  Frost_Nova * attack2 = new Frost_Nova(&enemy, &me);
  Ice_Block * isblock = new Ice_Block(&enemy, &enemy);
  cout << "Should be one, got no debuffs = " << me.can_perform(attack1) << endl;
  cout << "Should be 0, enemy is sheeped = " <<enemy.can_perform(attack2) << endl;
  cout << "Should be 1, casting iceblock = " << enemy.can_perform(isblock) << endl;
  

  system("pause");
  return 0;
}

