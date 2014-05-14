#include "../../../include/Status_Effects/Buffs/Iceberged.h"

namespace lab3 {

// TODO (Yuri#1#): Fix removal of Iceberged


  const string Iceberged::get_description() const {
    ostringstream ss;

    ss << " and is safe within the mountain of ice";

    return ss.str();
  }

   const Status_Effect* Iceberged::check_immunity(const Action* action) const {
    if(dynamic_cast<const Attack*>(action)!=NULL) {
      return this;
    }
    return nullptr;
  }
}
