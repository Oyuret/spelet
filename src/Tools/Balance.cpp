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
     {"Frozen Armor",50},
     {"heal",50},
     {"Absorb Shield", 90},
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

   unordered_map<string,string> _descriptions {

     // Ninja skills
     {"katana_slice", "A swift, silent, yet deadly attack. Deals 50 damaga to an enemy."},
     {"shuriken_toss", "Six-pointed ninja star. Deals 35 damage to an enemy."},


     // Pirate skills
     {"bottle_toss", "Yarr! And a bottle of rum! The bottle deals 35 damage to an enemy."},
     {"shank", "A vicious attack, deals 45 damage to an enemy."},

     // Sorcerer skills
     {"cone_of_cold", "Deals 25 damage to all enemies and has a chance to freeze them in place."},
     {"deep_freeze", "Turns an enemy afflicted by frozen into a popsicle."},
     {"frost_nova", "Deals 20 points of damage and freezes all enemies in place."},
     {"frostbolt", "Deals 30 points of damage to an enemy and has a chance to freeze it in place."},
     {"ice_lance", "Deals 25 points of damage to an enemy (double if frozen)."},
     {"polymorph", "Turns the enemy into a fluffy sheep. Heals the target to max health. Any damage will break the effect."},
     {"ice_barrier", "Places a protective shield on yourself with 50 armor points."},
     {"ice_block", "Removes all debuffs and makes you immune to dmg to your next turn."},

     // Healer skills
     {"silence", "Silences an enemy, making him unable to cast spells."},
     {"smite", "Deals 25 damage to an enemy."},
     {"absorb", "Places a protective shield on the target with 90 armor points."},
     {"heal", "Heals the target for 50 health points."},
     {"dispell", "Removes a debuff on the target."}

   };

}
