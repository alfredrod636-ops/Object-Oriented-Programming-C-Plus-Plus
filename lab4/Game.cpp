#include "Game.h"
#include <iostream>
#include <random>
using namespace std;


Game::Game() {}


Game::~Game() {
    for (RPG* player : players) {
        delete player;
    }
    players.clear();
    live_players.clear();
}


void Game::generatePlayers(int n)
{
    for (int i = 0; i < n; i++){
        players.push_back(new RPG());

        string new_name= "NPC_" + to_string(i);
        players[i]->setName(new_name);
        live_players.insert(i);
    }
}


int Game::selectPlayer() {
    static int selector = 0;

    vector<int> indices(live_players.begin(), live_players.end());

    if (indices.empty()) return -1;

    
    if (selector >= indices.size()) {
        selector = 0;
    }

    int selected = indices[selector];
    selector++; 

    return selected;
}


void Game::endRound(RPG* winner, RPG* loser, int loserIndex) {
    winner->setHitsTaken(0);
    winner->updateExpLevel();
    cout << winner->getName() << " won against " << loser->getName() << endl;
    live_players.erase(loserIndex);
}


void Game::battleRound() {
    int playerIndex1 = selectPlayer();
    int playerIndex2 = selectPlayer();

    if (playerIndex1 == playerIndex2) {
        battleRound(); 
        return;
    }

    RPG* player1 = players[playerIndex1];
    RPG* player2 = players[playerIndex2];

    while (player1->isAlive() && player2->isAlive()) {
        player1->attack(player2);
        if (player2->isAlive()) {
            player2->attack(player1);
        }
    }

    if (player1->isAlive()) {
        endRound(player1, player2, playerIndex2);
    } else {
        endRound(player2, player1, playerIndex1);
    }
}


void Game::gameLoop() {
    while (live_players.size() > 1) {
        battleRound();
    }
}


void Game::printFinalResults() {
    for (RPG* player : players) {
        player->printStats();
        cout << endl;
    }
}