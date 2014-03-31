#pragma once
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
      Actor() {}
      Actor(string name, string description) : _name(name), _description(description), _dead(false) {}

      // descriptic
      const string get_name() const;
      const string get_description() const;

      // stats
      const int get_health() const;

      // modify stats
      void set_damage(size_t hp);

      // status
      const string get_status() const;
      unordered_map<string, Buff* >& get_buffs() { return _buffs; }
      unordered_map<string, Debuff* >& get_debuffs() { return _debuffs; }

      // buffs and debuffs
      void add_buff(Buff*);
      void add_debuff(Debuff*);

      // combat stuff
      virtual bool can_perform(const Action* action) const;
      virtual bool is_immune(const Action* action) const;

      // checks
      bool is_dead() {return _dead;}

      ~Actor();

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

      // stuff
      bool _dead;
          
  };
}
