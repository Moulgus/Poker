#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>
#include "Table.h"

class Game {
private:
    Table table;
    int evaluateHand(const vector<Card>& hand);
public:
    Game(const vector<string>& names);
    void playRound();
};

#endif // GAME_H