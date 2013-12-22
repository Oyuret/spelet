#include "../room.h"

namespace lab3 {
  
  void Room::add_adjacent(Room* adjacent) {
    _adjacent.push_back(adjacent);
  }

  const string Room::get_name() const {
    return _name;
  }
  
  const string Room::get_description() const {
    return _description;
  }

  const vector<Room*>& Room::get_adjacent_rooms() const {
    return _adjacent;
  }
}