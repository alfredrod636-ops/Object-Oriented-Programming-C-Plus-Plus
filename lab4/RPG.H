#ifndef RPG_H
#define RPG_H

#include <string>
#include <iostream>
using namespace std;

const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;
class RPG {
public:
    
    RPG();
    RPG(string name, int hits_taken, float luck, float exp, int level); 

 
    void setName(string name);
    void setHitsTaken(int new_hits);
    void updateExpLevel();
    void attack(RPG* opponent);
    bool isAlive() const;

    
    string getName() const;
    int getHitsTaken() const;
    float getLuck() const;
    float getExp() const;
    int getLevel() const;

   
    void printStats();

   
    ~RPG();

private:
    string name;
    int hits_taken;
    float luck;
    float exp;
    int level;
};

#endif