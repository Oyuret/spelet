#include "../../include/Tools/Balance.h"

namespace balance {

  unordered_map<string, int> _dmg_table {

      // Melee Attacks
      {"Katana Slice", 50},
      {"Shank", 45},

      // Ranged Attacks
      {"Bottle Toss", 35},
      {"Shuriken Toss",35},


      // Spell attacks
      {"Cone of Cold",25},
      {"Deep Freeze",0},
      {"Frost Nova",20},
      {"Frostbolt",30},
      {"Ice Lance",25},
      {"Polymorph",0},
      {"Silence",0}

   };

   unordered_map<string, int> _utility_spells {
     {"Ice Barrier",50},
     {"Frozen Armor",25},
     {"Heal",50}
   };

   unordered_map<string, int> _health_tables {
    {"Pirate", 200},
    {"Robot", 250},
    {"Ninja", 190},
    {"Black Mage", 175},
    {"White Mage", 150}
   };

   unordered_map<string, int> _classes_health {
    {"Mage", 225},
    {"Healer", 200}
   };

}
