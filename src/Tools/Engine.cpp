#include "../../include/Tools/Engine.h"
#include "../../include/Actors/Player/Sorcerer.h"
#include "../../include/Actors/Player/Healer.h"
#include "../../include/Actors/Enemies/Melee/Humanoids/Ninja.h"
#include "../../include/Actors/Enemies/Melee/Humanoids/Pirate.h"
#include "../../include/Actors/Enemies/Ranged/Mages/Black_Mage.h"
#include "../../include/Actors/Enemies/Ranged/Mages/White_Mage.h"

namespace lab3 {

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

  Player* Engine::create_player(string class_name, string name, string description) {
    if(class_name.compare("Sorcerer")==0) return new Sorcerer(name, description);
    if(class_name.compare("Healer")==0) return new Healer(name, description);
    return nullptr;
  }

  void Engine::create_enemies(list<Enemy*>& enemies, int nr) {

    // create the enemies put them in the list
    for(int i=0; i<nr; ++i) {
      string enem = balance::_available_enemies[i];
      enemies.push_back(create_enemy(enem, enem));
    }

  }

  Enemy* Engine::create_enemy(string class_name, string name) {
    if(class_name.compare("Pirate")==0) return new Pirate(name);
    if(class_name.compare("Ninja")==0) return new Ninja(name);
    if(class_name.compare("White_Mage")==0) return new White_Mage(name);
    if(class_name.compare("Black_Mage")==0) return new Black_Mage(name);
    return nullptr;
  }

  void Engine::create_players(list<Player*>& players, int nr) {

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
  }
}

