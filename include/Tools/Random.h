#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <functional>
#include <random>

namespace lab3 {

  class Random {
    public:
      Random() {distribution = new std::uniform_int_distribution<int>(0,100);}
      ~Random() {delete distribution;}
      int next_random();
    private:
      std::default_random_engine generator;
      std::uniform_int_distribution<int>* distribution;
  };
}

#endif // RANDOM_H_INCLUDED
