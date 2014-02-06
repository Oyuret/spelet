#pragma once
#include "Action.h"
namespace lab3 {
  class Attack : public Action {
    public:
      Attack() {}
      size_t get_dmg() const { return _damage; }
      void set_dmg(size_t dmg) { _damage = dmg; }
    private:
    protected:
      size_t _damage;
  };
}