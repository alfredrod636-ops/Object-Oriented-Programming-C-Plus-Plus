#ifndef GAME_h
#define GAME_h
#include <iostream>
#include <vector>
#include <set>
#include "RPG.h"
using namespace std;

class Game {
public:
    Game();

    
    void generatePlayers(int count);
    void gameLoop();

   
    int selectPlayer();
    void battleRound();
    void endRound(RPG* winner, RPG* loser, int loserIndex);

  
    void printFinalResults();

    ~Game();

private:
    vector<RPG*> players;
    set<int> live_players;
};
#endif