#pragma once
#include "../../../../include/Actions/Attacks/Spell_Attacks/Frost_Nova.h"

namespace lab3 {

  class Frozen;
  
  void Frost_Nova::apply() {
    _damage = 30;
    for(auto& buff : _target->get_buffs()) {
      buff.second->on_dmg(this);
    }

    _target->set_damage(_damage);
  }
  
  void Frost_Nova::apply_action() {
    _target->add_debuff(new Frozen(5));
  }
}
