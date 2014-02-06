#include "../../../include/Status_Effects/Debuffs/Frozen.h"

namespace lab3 {
  
  void Frozen::on_attack(Actor& target) {
    // TODO: No dmg
  }

  void Frozen::on_dmg(string source) {
    if(source.compare("Ice_Lance")==0) {
      // TODO: Double the dmg
      std::cout << "DOUBLE DMG" << endl;
    }
  }

  void Frozen::on_end(Actor& target) {
    ostringstream ss;
    // decrease the duration of Frost Nova
    decrease_duration();

    if(_duration < 1) {
      ss << "Frost Nova has faded from " << target.get_name();
    }

    cout << ss.str();
  }

  const string Frozen::get_description() const {
    ostringstream ss;

    ss << "and rooted in place";

    return ss.str();
  }

  bool Frozen::can_perform(const Action* attack) const {
    bool value = true;

    if(dynamic_cast<const Close_Combat*>(attack)!=0) {
      value = false;
    }

    return value;
  }

  bool Frozen::check_immunity(const Action* action) const {
    return false;
  }
}