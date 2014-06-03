#ifndef BALANCE_H_INCLUDED
#define BALANCE_H_INCLUDED
#include <unordered_map>
#include <vector>

namespace balance {
   using namespace std;

   extern unordered_map<string, int> _dmg_table;
   extern unordered_map<string, int> _utility_spells;
   extern unordered_map<string, int> _health_tables;
   extern unordered_map<string, int> _classes_health;

   extern unordered_map<string, string> _available_classes;
   extern vector<string> _available_enemies;

}



#endif // BALANCE_H_INCLUDED
