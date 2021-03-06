#include "../../include/Tools/Engine.h"
#include "../../include/Actors/Player/Sorcerer.h"
#include "../../include/Actors/Player/Healer.h"
#include "../../include/Actors/Enemies/Melee/Humanoids/Ninja.h"
#include "../../include/Actors/Enemies/Melee/Humanoids/Pirate.h"
#include "../../include/Actors/Enemies/Ranged/Mages/Black_Mage.h"
#include "../../include/Actors/Enemies/Ranged/Mages/White_Mage.h"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <memory>

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
    cout << endl <<"How many enemies would you like to face? (max 4)" << endl;
    cout << "input>> ";

    // retrieve the number of enemies
    getline(cin,tmp_line);

    // get the number
    nr = atoi(tmp_line.c_str());

    // check we got a good number
    while(nr < 1 || nr > 4) {
      cout << "I'm sorry. I won't accept anything below 1 or above 4" << endl;
      cout << "Again; How many enemies would you like to face?" << endl;
      cout << "input>> ";

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
    cout << "input>> ";

    // retrieve the number of players
    getline(cin,tmp_line);

    // get the number
    nr = atoi(tmp_line.c_str());

    // check we got a good number
    while(nr < 1) {
      cout << endl <<"I'm sorry. I won't accept anything less than 1" << endl;
      cout << "Again, how many players are there in your group?" << endl;
      cout << "input>> ";
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
      cout << "input>> ";
      getline(cin, name);
      cout << endl << "How would you describe yourself?" << endl;
      cout << "input>> ";
      getline(cin, description);
      cout << endl <<"Which class would you like to play?" << endl;
      cout << "available classes are:" << endl << endl;

      for(auto& char_class : balance::_available_classes) {
        cout << ">> " <<char_class.first << ". " << char_class.second << endl;
      }

      cout << "input>> ";

      getline(cin, character_class);

      // loop until the user got the right thing
      while(balance::_available_classes.find(character_class)==balance::_available_classes.end()) {
        cout << endl << "Couldn't find that class! available classes are:" << endl << endl;

        for(auto& char_class : balance::_available_classes) {
          cout << ">> " <<char_class.first << ". " << char_class.second << endl;
        }

        getline(cin, character_class);
      }

      // push the player on the list
      players.push_back(create_player(character_class,name,description));

    }

    // return the number of players
    return nr;
  }

  bool Engine::all_dead(list<Player*>& players) const {
    bool all_dead = true;

    for(Actor* actor: players) {
      if(actor->is_dead() != true) {
        all_dead = false;
      }
    }
    return all_dead;
  }

  bool Engine::all_dead(list<Enemy*>& players) const {
    bool all_dead = true;

    for(Actor* actor: players) {
      if(actor->is_dead() != true) {
        all_dead = false;
      }
    }
    return all_dead;
  }

  void Engine::announce_win() const {
    cout << endl << "Congratulations! You have defeated all the enemies";
  }

  void Engine::announce_defeat() const {
    cout << endl << "I'm sorry but you have been defeated";
  }

  void Engine::enemy_turn(Enemy* enemy, list<Player*>& players, list<Enemy*>& enemies, Random& ran) const {
    // Announce who's turn it is
    cout << endl <<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout << endl << "It is " << enemy->get_name() << "'s turn!" << endl;

    // check if dead
    if(enemy->is_dead()) {
      cout << enemy->get_name() << " is currently dead and thus passes his turn" << endl;
      return;
    }

    // turn start
    cout << enemy->turn_start() << endl;
    unique_ptr<Action> spell(enemy->pick_action(players, enemies));
    cout << spell->perform(ran)<<endl;

    // turn end
    cout <<enemy->turn_end() << endl;

    // announce turn end
    cout << enemy->get_name() << "'s turn is over! Going on"<< endl;


  }

  /**
   * Handles the turn of a player
   */
  void Engine::player_turn(Player* player, list<Player*>& players, list<Enemy*>& enemies, Random& ran) const {
    // Announce who's turn it is
    cout << endl <<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    cout << endl << "It is " << player->get_name() << "'s turn!" << endl;

    // check if dead
    if(player->is_dead()) {
      cout << player->get_name() << " is currently dead and thus passes his turn" << endl;
      return;
    }

    // turn start
    cout << player->turn_start() << endl;

    // get the command and perform it
    bool used_turn = false;
    while(!used_turn) {
      string tmp_line;

      cout << endl <<"Input your command" << endl;
      cout << "input>>";
      getline(cin, tmp_line);

      // tokenize the input
      istringstream iss(tmp_line);
      vector<string> tokens {istream_iterator<string>{iss},
                             istream_iterator<string>{}
                            };

      // if the command exists
      if(_commands.find(tokens[0])==_commands.end()) {
        cout << endl << "bad usage! try again" << endl;
      } else {

        // add padding to the commands
        while(tokens.size()<4) tokens.push_back("");
        auto command = _commands.find(tokens[0]);

        // execute the command
        used_turn = command->second(player,tokens[1],tokens[3],players,enemies,ran);
        //used_turn= true;
      }
    }

    // turn end
    cout << endl <<player->turn_end() << endl;

    // announce turn end
    cout << player->get_name() << "'s turn is over! Going on"<< endl;

  }

  bool Engine::print_usage() const {
    cout << endl << "Usage:" << endl;
    cout << "status <party/enemies/all>: Prints the current status for param" << endl;
    cout << "describe <param>: describes the given parameter" << endl;
    cout << "cast <spell> on <target>: Casts the given spell on the target" << endl;
    cout << "spells: Prints a list of your given spells as your class" << endl;
    cout << "quit: quits the game" << endl;
    return false;
  }

  bool Engine::print_status(string who, list<Player*>& players, list<Enemy*>& enemies) const {

    cout << endl;

    if(who.compare("party")==0) {
      for(Player* player: players) {
        cout << player->get_status()<< endl;
      }
      return false;
    }

    if(who.compare("enemies")==0) {
      for(Enemy* player: enemies) {
        cout << player->get_status()<< endl;
      }
      return false;
    }

    if(who.compare("all")==0) {
      for(Player* player: players) {
        cout << player->get_status()<< endl;
      }
      for(Enemy* player: enemies) {
        cout << player->get_status()<< endl;
      }
      return false;
    }

    cout << "Bad usage! status <party/enemies/all>"<<endl;
    return false;

  }

  bool Engine::print_spells(Player* player) const {

    cout << endl << "Available spells for you:" << endl << endl;

    // print all the spells available to us
    vector<string> spells = player->get_spells();

    for(string spell : spells) {
      cout << spell << endl;
    }

    return false;
  }

  bool Engine::player_cast(Player* player, string spell, string target, list<Player*>& players,
                           list<Enemy*>& enemies, Random& ran) const {


    // make sure we own the spell
    vector<string> available_spells = player->get_spells();
    if(std::find(available_spells.begin(), available_spells.end(), spell)==available_spells.end()) {
      cout << "You don't have that spell! see spells" << endl;
      return false;
    }

    //make sure the target is present
    Actor* target_ptr = nullptr;

    for(Player* player : players) {
      if(target.compare(player->get_name())==0) {
        target_ptr = player;
      }
    }

    for(Enemy* player : enemies) {
      if(target.compare(player->get_name())==0) {
        target_ptr = player;
      }
    }

    // FULHACK VISSA SPELLS UTAN TARGET
    if( spell.compare("ice_barrier") ==0 ) {

      unique_ptr<Action> spell_ptr(player->cast_spell(spell,player));
      cout << spell_ptr->perform(ran)<<endl;
      return true;
    }

    if( spell.compare("ice_block") ==0 ) {

      unique_ptr<Action> spell_ptr(player->cast_spell(spell,player));
      cout << spell_ptr->perform(ran)<<endl;
      return true;
    }

    // FULHACK AOE
    if( spell.compare("cone_of_cold") ==0 ) {
      for(Enemy* enemy : enemies) {
        unique_ptr<Action> spell_ptr(player->cast_spell(spell,enemy));
        cout << spell_ptr->perform(ran)<<endl;
      }
      return true;
    }

    if( spell.compare("frost_nova") == 0 ) {
      for(Enemy* enemy : enemies) {
        unique_ptr<Action> spell_ptr(player->cast_spell(spell,enemy));
        cout << spell_ptr->perform(ran)<<endl;
      }
      return true;
    }

    if(target_ptr == nullptr) {
      cout << "Bad target! try again" << endl;
      return false;
    }

    unique_ptr<Action> spell_ptr(player->cast_spell(spell,target_ptr));
    cout << spell_ptr->perform(ran)<<endl;

    return true;
  }

  bool Engine::print_description(string what, list<Player*>& players, list<Enemy*>& enemies) const {

    cout << endl;

    // Try to describe a player
    for(Player* player : players) {
      if(what.compare(player->get_name())==0) {
        cout << player->get_description() << endl;
        return false;
      }
    }

    // Try to describe an enemy
    for(Enemy* enemy : enemies) {
      if(what.compare(enemy->get_name())==0) {
        cout << enemy->get_description() << endl;
        return false;
      }
    }

    // try to describe a spell
    if(balance::_descriptions.find(what) != balance::_descriptions.end()) {
      cout << balance::_descriptions[what] << endl;
      return false;
    } else {
      cout << "Bad usage! describe <what>" << endl;
    }
    return false;
  }
}

