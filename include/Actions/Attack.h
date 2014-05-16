#ifndef ATTACK_H_INCLUDED
#define ATTACK_H_INCLUDED

#include "Action.h"
namespace lab3 {
  class Attack : public Action {
    public:
      Attack() {}
      Attack(int dmg) : _damage(dmg) {};
      size_t get_dmg() const { return _damage; }
      void set_dmg(size_t dmg) { _damage = dmg; }
      virtual ~Attack() {}

    private:
    protected:
      virtual void calculate_action(Random& ran);
      virtual void apply_dmg();
      size_t _damage;
  };
}

#endif // ATTACK_H_INCLUDED
