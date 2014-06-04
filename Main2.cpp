#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <list>
#include <memory>

#include "include/Actors/Enemies/Enemy.h"
#include "include/Actors/Player/Player.h"
#include "include/Tools/Balance.h"
#include "include/Tools/Engine.h"
#include "include/Tools/Random.h"

using namespace lab3;
using namespace std;

int main(int argc, char* argv[]) {

  // The random engine
  Random ran;

  // the engine used to run this thing
  Engine eng;

  // the list containing the players
  list<Player*> players;

  // the list containing the enemies
  list<Enemy*> enemies;

  // the number of players
  int _nr_of_players;

  // the number of enemies
  int _nr_of_enemies;

  // the temp string used to get lines
  string tmp_line;

  // play the intro
  eng.play_intro();

  // create players
  _nr_of_players = eng.create_players(players);

  // Create the enemies
  _nr_of_enemies = eng.create_enemies(enemies);


  // tests
  for(Player* player : players) {
    cout << player->get_status() << endl;
  }

  for(Enemy* enemy : enemies) {
    cout << enemy->get_status() << endl;
  }

  for(Player* player : players) {
    for(Enemy* enemy : enemies) {
      unique_ptr<Action> pl(player->cast_spell("frostbolt",enemy));
      cout << pl->perform(ran) << endl;
      unique_ptr<Action> en(enemy->pick_action(players, enemies));
      cout << en->perform(ran) << endl;
    }

  }

  for(Player* player : players) {
    cout << player->get_status() << endl;
  }

  for(Enemy* enemy : enemies) {
    cout << enemy->get_status() << endl;
  }




  // We quit the game. Destroy eveything and return
  eng.destroy_elements(players,enemies);
  return 0;
}
