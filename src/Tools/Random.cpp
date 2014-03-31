#include "../../include/Tools/Random.h"

namespace lab3 {
  int Random::next_random() {
    return distribution->operator()(generator);
  }
 
}