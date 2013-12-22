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
      Actor(string name, string description) : _name(name), _description(description) {}

      // descriptic
      const string get_name() const;
      const string get_description() const;

      // stats
      const size_t get_health() const;
      const size_t get_agility() const;
      const size_t get_dexterity() const;
      const size_t get_intelligence() const;

      // modify stats
      void set_damage(size_t hp) {_health-=hp;}

      // status
      const string get_status() const;
      unordered_map<string, Buff* >& get_buffs() { return _buffs; }
      unordered_map<string, Debuff* >& get_debuffs() { return _debuffs; }

      // buffs and debuffs
      void add_buff(Buff*);
      void add_debuff(Debuff*);

      ~Actor();

    private:
      

    protected:
      // descriptic
      string _name;
      string _description;

      // buffs and debuffs
      unordered_map<string, Buff* > _buffs;
      unordered_map<string, Debuff* > _debuffs;

      // stats
      int _health;
      size_t _agility;
      size_t _dexterity;
      size_t _intelligence;
      
  };
}
