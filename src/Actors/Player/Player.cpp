#include "../../../include/Actors/Player/Player.h"

namespace lab3 {
  Action* Player::cast_spell(string name, Actor* target) {
    // try to cast the given spell
    auto result = _spells->find(name);

    if(result == _spells->end()) {
      return nullptr;
    } else {
      return result->second(this,target);
    }
  }
}
