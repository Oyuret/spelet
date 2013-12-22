#ifndef LAB3_ROOM
#define LAB3_ROOM

#include "room.h"
#include <string>
#include <vector>
#include <unordered_map>

namespace lab3 {
  using namespace std;

  class Room {

    public:
      
      // constructor
      Room(string name, string description) : _name(name), _description(description) {}

      // modifiers
      void add_adjacent(Room* adjacent);

      // getters
      const string get_name() const;
      const string get_description() const;
      const vector<Room*>& get_adjacent_rooms() const;

      // destructor
      virtual ~Room() {}

    private:
      string _name;
      string _description;
      vector<Room*> _adjacent;
      //unordered_map<string, Room*> _items;
      
  };
}

#endif