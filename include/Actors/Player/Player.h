#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


#include "../Actor.h"

namespace lab3 {
  using namespace std;
  class Player : public Actor {
    public:
      Player() {}
      Player(string name, string description, int health) {_name=name;
        _description=description; _health = health; _max_health = health;}
      virtual Action* cast_spell(string name, Actor* target);
      virtual ~Player() {}
    private:
    protected:
      unordered_map<string,function<Action*(Actor*,Actor*)>>* _spells;
  };
}

#endif // PLAYER_H_INCLUDED
