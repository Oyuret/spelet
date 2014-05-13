#ifndef BALANCE_H_INCLUDED
#define BALANCE_H_INCLUDED
#include <unordered_map>

namespace balance {
   using namespace std;

   extern unordered_map<string, int> _dmg_table;
   extern unordered_map<string, int> _utility_spells;
   extern unordered_map<string, int> _health_tables;
   extern unordered_map<string, int> _classes_health;

}



#endif // BALANCE_H_INCLUDED
