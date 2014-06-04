#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <list>
#include <unordered_map>
#include "../Actors/Player/Player.h"
#include "../Actors/Enemies/Enemy.h"

namespace lab3 {

  class Engine {
  public:
    Engine() {}

    void play_intro() const;
    int create_players(list<Player*>& players) const;
    int create_enemies(list<Enemy*>& enemies) const;

    void player_turn(Player* player, list<Player*>& players, list<Enemy*>& enemies) const;

    bool all_dead(list<Player*>& player) const;
    bool all_dead(list<Enemy*>& player) const;


    void announce_win() const;
    void announce_defeat() const;


    void destroy_elements(list<Player*>& players, list<Enemy*> enemies);

    ~Engine() {}

  private:
    Player* create_player(string class_name, string name, string description) const;
    Enemy* create_enemy(string class_name, string name) const;

    bool print_usage() const;
    bool print_description(string what) const { return true;}
    bool print_status(string who, list<Player*>& players, list<Enemy*>& enemies) const;
    bool print_spells(Actor* player) const {return true;}
    bool player_cast(Actor* player, string spell, string target, list<Player*>& players, list<Enemy*>& enemies) const { return true;}

    unordered_map<string, function<bool(Actor*,string,string,list<Player*>&,list<Enemy*>&)>> _commands {
      {"status", [this] (Actor* player, string spell, string target, list<Player*>& players, list<Enemy*>& enemies) -> bool {return print_status(spell, players, enemies);}},
      {"describe", [this] (Actor* player, string spell, string target, list<Player*>& players, list<Enemy*>& enemies) -> bool {return print_description(spell);}},
      {"usage", [this] (Actor* player, string spell, string target, list<Player*>& players, list<Enemy*>& enemies) -> bool {return print_usage();}},
      {"cast", [this] (Actor* player, string spell, string target, list<Player*>& players, list<Enemy*>& enemies) -> bool {return player_cast(player, spell, target, players, enemies);}},
      {"quit", [this] (Actor* player, string spell, string target, list<Player*>& players, list<Enemy*>& enemies) -> bool {cout << endl <<"Quitting game! Hold tight"; destroy_elements(players,enemies); exit(0);}},
      {"spells", [this] (Actor* player, string spell, string target, list<Player*>& players, list<Enemy*>& enemies) -> bool {return print_spells(player);}}
    };

  protected:

  };
}



#endif // ENGINE_H_INCLUDED
