#include <iostream>
#include "Pokemon.h"

/**
 * @brief construct a new Pokemon:: pokemon object
 * 
 */
Pokemon::Pokemon(){
    name = "unindentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "default constructor (pokemon)\n";
}
/**
 * @brief Construct a new Pokemon:: Pokemon object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param type 
 */
Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type){
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def;
    type = type;
    cout << "overloaded constructor (pokemon)\n";
}
/**
 * @brief says whatever this pokemon normally says
 * 
 */
void Pokemon::speak(){
    cout << "...\n";
}

void Pokemon::printStats(){
    printf("name:%s\t HP: %i\t DEF: %i\t ATT: %i\n", name.c_str(), hp, defense, attack);
    cout << "Type: ";
    for(int i = 0; i < type.size(); i++){
        cout << type[i] << "\t";
    }
    cout << endl;
}