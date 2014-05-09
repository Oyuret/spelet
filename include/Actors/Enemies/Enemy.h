#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED


#include <list>
#include "../Actor.h"
#include "../Player/Player.h"
#include "../../Actions/Pass.h"

namespace lab3 {
   using namespace std;
   class Action;

   class Enemy : public Actor {
      public:
         virtual Action* pick_action(list<Player*>& players, list<Enemy*>& enemies) {
            return new Pass();
         }
         Enemy() {}
         virtual ~Enemy() {}
      private:
      protected:
   };
}

#endif // ENEMY_H_INCLUDED
