#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <vector>
#include "../Actor.h"

namespace lab3 {
  using namespace std;
  class Player : public Actor {
    public:
      Player() {}
      Player(string name, string description, int health) : Actor(name, description, health) {}
      virtual Action* cast_spell(string name, Actor* target);
      virtual vector<string> get_spells();
      virtual ~Player() {}
    private:
    protected:
      unordered_map<string,function<Action*(Actor*,Actor*)>>* _spells;
  };
}

#endif // PLAYER_H_INCLUDED
