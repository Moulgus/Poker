#pragma once
#ifndef TABLE_H
#define TABLE_H

using namespace std;

#include <vector>
#include <string>
#include "Deck.h"
#include "Player.h"

class Table {
public:
    Deck deck;
    vector<Player> players;
    Table(const vector<string>& names);
    void dealInitial(int cardsPerPlayer = 5);
    void showAllHands() const;
};

#endif // TABLE_H
