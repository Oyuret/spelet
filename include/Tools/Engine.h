#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <list>
#include "../Actors/Player/Player.h"
#include "../Actors/Enemies/Enemy.h"

namespace lab3 {

  class Engine {
  public:
    Engine() {}

    void play_intro() const;
    int create_players(list<Player*>& players) const;
    int create_enemies(list<Enemy*>& enemies) const;
    void destroy_elements(list<Player*>& players, list<Enemy*> enemies);

    ~Engine() {}

  private:
    Player* create_player(string class_name, string name, string description) const;
    Enemy* create_enemy(string class_name, string name) const;

  protected:

  };
}



#endif // ENGINE_H_INCLUDED
