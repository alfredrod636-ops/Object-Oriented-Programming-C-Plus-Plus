#include <iostream>
#include "RPG.H"
using namespace std;

RPG::RPG() {
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

RPG:: RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

/**
 * @brief sets hits_taken to new_hits
 * 
 * @param new_hits 
 */
void RPG::setHitsTaken(int new_hits) {
    hits_taken = new_hits;
}

string RPG::getName() const{
    return name;
}
int RPG::getHitsTaken() const{
    return hits_taken;
}
float RPG::getLuck() const{
    return luck;
}
float RPG::getExp() const{
    return exp;
}
int RPG::getLevel() const{
    return level;
}

/**
 * @brief returns whether the hits_taken is less than or greater than max_hits_taken if its greater than the player is dead.
 * 
 * @return true: player is alive 
 * @return false: player is unalive
 */
bool RPG::isAlive() const{
    return hits_taken < MAX_HITS_TAKEN;
}
