#include "../include/Actors/Actor.h"

namespace lab3 {

  void Actor::add_buff(Buff* buff) {
    std::pair<string, Buff*> tmp (buff->get_name(), buff);

     // if the buff is already present. Refresh
     if(_buffs.find(buff->get_name()) == _buffs.end()) {
        _buffs.insert(tmp);
      } else {
        Buff* tmp1 = _buffs.find(buff->get_name())->second;
        delete tmp1;
        _buffs.erase(buff->get_name());
        _buffs.insert(tmp);
      }
  }

  void Actor::add_debuff(Debuff* debuff) {
    std::pair<string, Debuff*> tmp (debuff->get_name(), debuff);

    // if the debuff is already present, refresh
    if(_debuffs.find(debuff->get_name()) == _debuffs.end()) {
        _debuffs.insert(tmp);
      } else {
        Debuff* tmp1 = _debuffs.find(debuff->get_name())->second;
        delete tmp1;
        _debuffs.erase(debuff->get_name());
        _debuffs.insert(tmp);
      }
  }

  const string Actor::get_name() const {
    return _name;
  }

  const string Actor::get_description() const {
    return _description;
  }

  const size_t Actor::get_health() const {
    return _health;
  }

  const size_t Actor::get_agility() const {
    return _agility;
  }

  const size_t Actor::get_dexterity() const {
    return _dexterity;
  }

  const size_t Actor::get_intelligence() const {
    return _intelligence;
  }

  const string Actor::get_status() const {
    ostringstream ss;

    ss << get_name() << " has " << get_health() << " health points left.\n";
    
    // list buffs
    if(_buffs.size() != 0) {
      ss << get_name() << " is currently buffed by ";
      for(auto& buff : _buffs) {
        ss << buff.first << " " << buff.second->get_description() <<"\n";
      }
    } else {
      ss << get_name() << " has currently no buffs.\n";
    }

    // list debuffs
    if(_debuffs.size() != 0) {
      ss << get_name() << " is currently affected by ";
      for(auto& debuff : _debuffs) {
        ss << debuff.first << " for " << debuff.second->get_duration() << " more rounds\n";
      }
    } else {
      ss << get_name() <<" has currently no buffs.\n";
    }

    return ss.str();
     
  }

  // this actor is dead. Commence clean-up
  Actor::~Actor() {
    // clean up buffs
    for(auto& buff : _buffs) {
      delete buff.second;
    }

    // clean up  debuffs
    for(auto& debuff : _debuffs) {
      delete debuff.second;
    }

    _buffs.clear();
    _debuffs.clear();
  }
}