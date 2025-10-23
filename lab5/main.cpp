#include <iostream>
#include "Charmander.h"
using namespace std;
int main()
{
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("scratch");

    cout << "----construcor created-------\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType,skills);

    Pokemon * p1 = &charlie;
    cout << "\n-----Speak called from pokemon pointer-------------\n";
    (*p1).speak();

    Charmander * c1 = &charlie ;
    cout <<"\n------speak called from charmander pointer-----\n";
    (*c1).speak();

    cout<< "\n------- print stats-------\n";
    charlie.printStats();
    return 0;
}