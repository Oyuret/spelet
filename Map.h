#ifndef LAB3_MAP
#define LAB3_MAP

#include <vector>
#include "room.h"

namespace lab3 {
  using namespace std;

  class Map {
    public:
      void add_room(Room* room);
    private:
      vector<Room*> _rooms;
  };
}
#endif