#include <iostream> 
#include <stdio.h> 
#include "Charmander.h"
/**
 * @brief Construct a new Charmander:: Charmander object
 * 
 */
Charmander::Charmander() : Pokemon() {
    type.push_back("Fire"); 
    skills.push_back("Growl");
    skills.push_back("scratch");

    cout << "Default Constructor (Charmander)\n";
}
/**
 * @brief Construct a new Charmander:: Charmander object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param t 
 * @param s 
 */
Charmander::Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s):
 Pokemon(name, hp, att, def, t){
    type = t;
    skills = s;
    cout << "overloaded constructor (charmander)\n";
 }

/**
 * @brief says what a charmander says
 * 
 */
 void Charmander::speak(){
    cout<< "charmander-char\n";
 }


void Charmander::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t'";
    }
    cout << endl;
}