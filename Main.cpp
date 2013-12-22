#include "include\Actors\Enemies\Melee\Humanoids\Pirate.h"
#include "include\Actors\Player\Player.h"
#include "include\Actions\Attacks\Spell_Attacks\Frost_Nova.h"
#include "include\Status_Effects\Buffs\Frozen_Armor.h"

using namespace lab3;
using namespace std;

int main() {

  Player me("Yuri", "Magikern från berga");
  Pirate enemy;

  enemy.add_buff(new Frozen_Armor());

  Frost_Nova attack(&me, &enemy);
  attack.apply();
  attack.apply_action();

  cout << enemy.get_status() << endl;

  attack.apply();
  attack.apply_action();

  cout << enemy.get_status() << endl;

  

  system("pause");
  return 0;
}

