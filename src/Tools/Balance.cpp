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
      {"Silence",0},
      {"Smite",25}

   };

   unordered_map<string, int> _utility_spells {
     {"Ice Barrier",50},
     {"Frozen Armor",50},
     {"Heal",50},
     {"Absorb Shield", 90},
     {"Absorb", 90}
   };

   unordered_map<string, int> _health_tables {
    {"Pirate", 200},
    {"Robot", 250},
    {"Ninja", 190},
    {"Black_Mage", 175},
    {"White_Mage", 150}
   };

   unordered_map<string, int> _classes_health {
    {"Sorcerer", 225},
    {"Healer", 200}
   };

   unordered_map<string, string> _available_classes {
    {"Sorcerer", "A powerful ranged caster"},
    {"Healer", "A fierceful healer"}
   };

   vector<string> _available_enemies {
     {"White_Mage"},
     {"Black_Mage"},
     {"Pirate"},
     {"Ninja"}
   };

}
