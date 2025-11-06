#include <iostream>
#include <random>
#include "RPG.h"
using namespace std;


RPG::RPG() {
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}


RPG::RPG(string name, int hits_taken, float luck, float exp, int level) {
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}


void RPG::setHitsTaken(int new_hits) {
    hits_taken = new_hits;
}

void RPG::setName(string name) {
    this->name = name;
}

void RPG::updateExpLevel() {
    exp += 50;
    if (exp >= 100) {
        level++;
        exp = 0;
        luck += 0.1;
    }
}

void RPG::attack(RPG* opponent) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num = dis(gen);
    bool hit = random_num > (HIT_FACTOR + opponent->getLuck());
    if (hit) {
        opponent->setHitsTaken(opponent->getHitsTaken() + 1);
    }
}

string RPG::getName() const {
    return name;
}

int RPG::getHitsTaken() const {
    return hits_taken;
}

float RPG::getLuck() const {
    return luck;
}

float RPG::getExp() const {
    return exp;
}

int RPG::getLevel() const {
    return level;
}

bool RPG::isAlive() const {
    return hits_taken < MAX_HITS_TAKEN;
}


void RPG::printStats() {
    cout << "Name: " << name
         << "     Hits Taken: " << hits_taken
         << "     Luck: " << luck
         << "     Exp: " << exp
         << "     Level: " << level
         << "     Status: " << (isAlive() ? "Alive" : "Dead")
         << endl;
}


RPG::~RPG() {}