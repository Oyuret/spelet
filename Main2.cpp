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

// TODO (Yuri#1#): Add death texts to Actor:deal_dmg


  // The random engine and the engine
  Random ran;
  Engine eng;

  // lists containing actors
  list<Player*> players;
  list<Enemy*> enemies;

  // bookkeeping
  int _nr_of_players;
  int _nr_of_enemies;

  // play the intro
  eng.play_intro();

  // create players
  _nr_of_players = eng.create_players(players);

  // Create the enemies
  _nr_of_enemies = eng.create_enemies(enemies);


  // loop the game
  bool running = true;
  while(running) {

    // check if all players are dead
    if(eng.all_dead(players)) {
      eng.announce_defeat();
      break;
    }

    // check if all enemies are dead
    if(eng.all_dead(enemies)) {
      eng.announce_win();
      break;
    }

    // loop through the players
    for(Player* player : players) {
      eng.player_turn(player, players, enemies);
    }
    running = false;

  }






  // We quit the game. Destroy eveything and return
  eng.destroy_elements(players,enemies);
  return 0;
}
