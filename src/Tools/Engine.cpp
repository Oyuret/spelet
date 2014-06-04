#include "../../include/Tools/Engine.h"
#include "../../include/Actors/Player/Sorcerer.h"
#include "../../include/Actors/Player/Healer.h"
#include "../../include/Actors/Enemies/Melee/Humanoids/Ninja.h"
#include "../../include/Actors/Enemies/Melee/Humanoids/Pirate.h"
#include "../../include/Actors/Enemies/Ranged/Mages/Black_Mage.h"
#include "../../include/Actors/Enemies/Ranged/Mages/White_Mage.h"

namespace lab3 {

  void Engine::play_intro() const {
    // Present the game
    cout << "Welcome to the arena! You are about to face a set of" << endl;
    cout << "fearless enemies. You are about to make some decisions." << endl;
  }

  void Engine::destroy_elements(list<Player*>& players, list<Enemy*> enemies) {

    // delete the players
    for(Player* player : players) {
      delete player;
    }

    // delete the enemies
    for(Enemy* enemy: enemies) {
      delete enemy;
    }
  }

  Player* Engine::create_player(string class_name, string name, string description) const {
    if(class_name.compare("Sorcerer")==0) return new Sorcerer(name, description);
    if(class_name.compare("Healer")==0) return new Healer(name, description);
    return nullptr;
  }

  int Engine::create_enemies(list<Enemy*>& enemies) const {
    int nr;
    string tmp_line;

    // Continue with the intro
    cout << "How many enemies would you like to face? (max 4)" << endl;

    // retrieve the number of enemies
    getline(cin,tmp_line);

    // get the number
    nr = atoi(tmp_line.c_str());

    // check we got a good number
    while(nr < 1 || nr > 4) {
      cout << "I'm sorry. I won't accept anything below 1 or above 4" << endl;
      cout << "Again; How many enemies would you like to face?" << endl;

      // retrieve the number of enemies
      getline(cin,tmp_line);

      // get the number
      nr = atoi(tmp_line.c_str());
    }

    cout << endl <<"Good! " << nr << " enemies it is!" << endl;

    // create the enemies put them in the list
    for(int i=0; i<nr; ++i) {
      string enem = balance::_available_enemies[i];
      enemies.push_back(create_enemy(enem, enem));
    }

    return nr;

  }

  Enemy* Engine::create_enemy(string class_name, string name) const {
    if(class_name.compare("Pirate")==0) return new Pirate(name);
    if(class_name.compare("Ninja")==0) return new Ninja(name);
    if(class_name.compare("White_Mage")==0) return new White_Mage(name);
    if(class_name.compare("Black_Mage")==0) return new Black_Mage(name);
    return nullptr;
  }

  int Engine::create_players(list<Player*>& players) const {
    int nr;
    string tmp_line;

    // as how many players there are.
    cout << "How many heroes are there in your group?" << endl;

    // retrieve the number of players
    getline(cin,tmp_line);

    // get the number
    nr = atoi(tmp_line.c_str());

    // check we got a good number
    while(nr < 1) {
      cout << endl <<"I'm sorry. I won't accept anything less than 1" << endl;
      cout << "Again, how many players are there in your group?" << endl;
      // retrieve the number of players
      getline(cin,tmp_line);

      // get the number
      nr = atoi(tmp_line.c_str());
    }

    // we got a good number
    cout << endl <<"Good! " << nr << " players it is!" << endl;

    // get the info on the players
    for(int i=0; i< nr; ++i) {

      string name;
      string description;
      string character_class;

      cout << endl << "What is the name of player nr " << i+1 << " ?" << endl;
      getline(cin, name);
      cout << endl << "How would you describe yourself?" << endl;
      getline(cin, description);
      cout << endl <<"Which class would you like to play?" << endl;
      cout << "available classes are:" << endl << endl;

      for(auto& char_class : balance::_available_classes) {
        cout << char_class.first << ". " << char_class.second << endl;
      }

      getline(cin, character_class);

      // loop until the user got the right thing
      while(balance::_available_classes.find(character_class)==balance::_available_classes.end()) {
        cout << endl << "Couldn't find that class! available classes are:" << endl << endl;

        for(auto& char_class : balance::_available_classes) {
          cout << char_class.first << ". " << char_class.second << endl;
        }

        getline(cin, character_class);
      }

      // push the player on the list
      players.push_back(create_player(character_class,name,description));

    }

    // return the number of players
    return nr;
  }
}

