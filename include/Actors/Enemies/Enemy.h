#pragma once
#include "../Actor.h"
#include "../Player/Player.h"
#include "../../Actions/Pass.h"

namespace lab3 {
  using namespace std;

  class Enemy : public Actor {
    public:
      virtual Action* pick_action(list<Player*> players, list<Enemy*> enemies) {return new Pass();}
    private:
    protected:
  };
 }