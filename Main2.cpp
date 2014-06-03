#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <list>

#include "include/Actors/Enemies/Enemy.h"
#include "include/Actors/Player/Player.h"
#include "include/Tools/Balance.h"
#include "include/Tools/Engine.h"

using namespace lab3;
using namespace std;

int main(int argc, char* argv[]) {

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

  // Present the game
  cout << "Welcome to the arena! You are about to face a set of" << endl;
  cout << "fearless enemies. How many heroes are in your group?" << endl;

  // retrieve the number of players
  getline(cin,tmp_line);

  // get the number
  _nr_of_players = atoi(tmp_line.c_str());

  // check we got a good number
  if(_nr_of_players <=0) return 1;

  // create players
  eng.create_players(players, _nr_of_players);

  // Continue with the intro
  cout << "How many enemies would you like to face? (max 4)" << endl;

  // retrieve the number of enemies
  getline(cin,tmp_line);

  // get the number
  _nr_of_enemies = atoi(tmp_line.c_str());

  // Create the enemies
  eng.create_enemies(enemies, _nr_of_enemies);


  // tests
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
