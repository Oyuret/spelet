#ifndef ACTOR_H_INCLUDED
#define ACTOR_H_INCLUDED

#include <string>
#include <unordered_map>
#include <sstream>
#include <utility>
#include "../Status_Effects/Buff.h"
#include "../Status_Effects/Debuff.h"

namespace lab3 {
  using namespace std;

  class Actor {

    public:
      Actor() : _dead(false) {}
      Actor(string name, string description, int health) : _name(name), _description(description),
          _health(health), _max_health(health) , _dead(false) {}

      // descriptic
      const string get_name() const;
      const string get_description() const;

      // stats
      const int get_health() const;
      const int get_max_health() const;
      double get_health_precent() const;

      // modify stats
      const string apply_damage(size_t hp);
      const string heal_up(size_t healing_power);

      // status
      const string get_status() const;
      unordered_map<string, Buff* >& get_buffs() { return _buffs; }
      unordered_map<string, Debuff* >& get_debuffs() { return _debuffs; }

      // buffs and debuffs
      void add_buff(Buff*);
      void add_debuff(Debuff*);

      //turn stuff
      const string turn_start();
      const string turn_end();

      // checks
      bool is_dead() {return _dead;}

      virtual ~Actor();

    private:

      // buffs and debuffs
      unordered_map<string, Buff* > _buffs;
      unordered_map<string, Debuff* > _debuffs;

    protected:

      // descriptic
      string _name;
      string _description;

      // stats
      int _health;
      int _max_health;

      // stuff
      bool _dead;

  };
}

#endif // ACTOR_H_INCLUDED
