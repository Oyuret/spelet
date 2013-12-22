#include "../include/Status_Effects/Debuffs/Frozen.h"

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
}