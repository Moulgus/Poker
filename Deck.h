#ifndef DECK_H
#define DECK_H

#include <vector>
#include <random>
#include "Card.h"

class Deck {
private:
    vector<Card> cards;
    mt19937 rng;
public:
    Deck();
    void reset();
    void shuffle();
    Card deal();
};

#endif // DECK_H