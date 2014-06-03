#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <list>
#include "../Actors/Player/Player.h"
#include "../Actors/Enemies/Enemy.h"

namespace lab3 {

  class Engine {
  public:
    Engine() {}

    void create_players(list<Player*>& players, int nr);
    void create_enemies(list<Enemy*>& enemies, int nr);

    void destroy_elements(list<Player*>& players, list<Enemy*> enemies);

    ~Engine() {}

  private:
    Player* create_player(string class_name, string name, string description);
    Enemy* create_enemy(string class_name, string name);
  protected:

  };
}



#endif // ENGINE_H_INCLUDED
