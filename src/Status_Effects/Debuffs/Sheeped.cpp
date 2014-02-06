#include "../../../include/Status_Effects/Debuffs/Sheeped.h"

namespace lab3 {
  
  void Sheeped::on_attack(Actor& target) {
    // TODO: No dmg
  }

  void Sheeped::on_dmg(string source) {
    // break sheep
    _duration = 0;
  }

  void Sheeped::on_end(Actor& target) {
    ostringstream ss;
    // decrease duration on Sheeped
    decrease_duration();

    if(_duration < 1) {
      ss << "Sheeped has faded from " << target.get_name();
    }

    cout << ss.str();
  }

  const string Sheeped::get_description() const {
    ostringstream ss;

    ss << " and is now chewing grass";

    return ss.str();
  }

  bool Sheeped::can_perform(const Action* attack) const {
    return false;
  }

  bool Sheeped::check_immunity(const Action* action) const {
    return false;
  }
}