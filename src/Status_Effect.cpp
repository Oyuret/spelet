#include "../include/Status_Effects/Status_Effect.h"

namespace lab3 {
  const size_t Status_Effect::get_duration() const {
    return _duration;
  }

  const string Status_Effect::get_name() const {
    return _name;
  }

  void Status_Effect::decrease_duration() {
    if(_duration >= 1) {
      _duration--;
    } else {
      // It's already 0
    }
  }

  const string Status_Effect::get_description() const{
    return "";
  }

  void Status_Effect::set_duration(size_t time) {
    _duration= time;
  }

  const Status_Effect* Status_Effect::check_immunity(const Action* action) const { return nullptr; }
  const Status_Effect* Status_Effect::can_perform(const Action* action) const { return nullptr; }
}
