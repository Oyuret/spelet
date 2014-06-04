#include "../../../include/Actors/Player/Player.h"

namespace lab3 {

  vector<string> Player::get_spells() {
    vector<string> spells;

    for(auto spell : *_spells) {
      spells.push_back(spell.first);
    }

    return spells;
  }

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
