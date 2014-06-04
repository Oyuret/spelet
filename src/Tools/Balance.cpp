#include "../../include/Tools/Balance.h"

namespace balance {

  unordered_map<string, int> _dmg_table {

      // Melee Attacks
      {"katana_slice", 50},
      {"shank", 45},

      // Ranged Attacks
      {"bottle_toss", 35},
      {"shuriken_toss",35},


      // Spell attacks
      {"cone_of_cold",25},
      {"deep_freeze",0},
      {"frost_nova",20},
      {"frostbolt",30},
      {"ice_lance",25},
      {"polymorph",0},
      {"silence",0},
      {"smite",25}

   };

   unordered_map<string, int> _utility_spells {
     {"ice_barrier",50},
     {"frozen_armor",50},
     {"heal",50},
     {"absorb_shield", 90},
     {"absorb", 90}
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
