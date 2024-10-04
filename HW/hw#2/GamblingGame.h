#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H
#include "Player.h"
#include <iostream>

using namespace std;

class GamblingGame {
private:
    Player* players[2];  // Array of pointers to Player objects
    int index = 0;
public:
    GamblingGame(Player* player1, Player* player2);  // Take an array of pointers to Player
    void play();
};

#endif //GAMBLINGGAME_H