#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>
#include "Card.h"

class Player {
private:
    string name;
public:
    vector<Card> hand;
    Player(const string& n);
    void receive(Card c);
    void showHand() const;
    string getName() const;
    void clearHand();
};

#endif // PLAYER_H

