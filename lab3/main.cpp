#include <iostream>
#include "RPG.H"
using namespace std;

int main(){
    RPG p1 = RPG("wiz",0,0.2,60,1);
    RPG p2 = RPG();

    printf("%s current stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t exp: %f\t level: %i\n", p1.getHitsTaken(), p1.getLuck(),p1.getExp(), p1.getLevel());
    
    printf("%s current stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t exp: %f\t level: %i\n", p2.getHitsTaken(), p2.getLuck(),p2.getExp(), p2.getLevel());

    p1.setHitsTaken(4);
    cout<< "\nP1 hits taken";
    printf(" %i\n",p1.getHitsTaken());

    cout <<"0 is dead, 1 is alive\n";
    cout << "P1: "<<p1.isAlive()<< ", P2: " <<p2.isAlive() << endl;
    return 0;
}

