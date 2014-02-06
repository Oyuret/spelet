#include "../../../include/Status_Effects/Debuffs/Silenced.h"

namespace lab3 {
  
  void Silenced::on_attack(Actor& target) {
    // TODO: No dmg
  }

  void Silenced::on_dmg(string source) {
    if(source.compare("Ice_Lance")==0) {
      // TODO: Double the dmg
      std::cout << "DOUBLE DMG" << endl;
    }
  }

  void Silenced::on_end(Actor& target) {
    ostringstream ss;
    // decrease the duration of Frost Nova
    decrease_duration();

    if(_duration < 1) {
      ss << "Silence has faded from " << target.get_name();
    }

    cout << ss.str();
  }

  const string Silenced::get_description() const {
    ostringstream ss;

    ss << " and cannot cast spells!";

    return ss.str();
  }

  bool Silenced::can_perform(const Action* attack) const {
    bool value = true;

    if(dynamic_cast<const Spell*>(attack)!=0) {
      value = false;
    }

    return value;
  }

  bool Silenced::check_immunity(const Action* action) const {
    return false;
  }
}