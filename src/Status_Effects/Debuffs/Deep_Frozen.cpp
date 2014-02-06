#include "../../../include/Status_Effects/Debuffs/Deep_Frozen.h"

namespace lab3 {
  
  void Deep_Frozen::on_attack(Actor& target) {
    // TODO: No dmg
  }

  void Deep_Frozen::on_dmg(string source) {
    if(source.compare("Ice_Lance")==0) {
      // TODO: Double the dmg
      std::cout << "DOUBLE DMG" << endl;
    }
  }

  void Deep_Frozen::on_end(Actor& target) {
    ostringstream ss;
    // decrease the duration of Frost Nova
    decrease_duration();

    if(_duration < 1) {
      ss << "Deep Freeze has faded from " << target.get_name();
    }

    cout << ss.str();
  }

  const string Deep_Frozen::get_description() const {
    ostringstream ss;

    ss << "and turned into a popsicle!";

    return ss.str();
  }

  bool Deep_Frozen::can_perform(const Action* attack) const {
    // we are deep frozen, cannot do anything
    return false;
  }

  bool Deep_Frozen::check_immunity(const Action* action) const {
    return false;
  }
}