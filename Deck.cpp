#include "Deck.h"
#include <ctime>
#include <algorithm>

using namespace std;

Deck::Deck() : rng(static_cast<unsigned>(time(nullptr))) {
    reset();
}

void Deck::reset() {
    cards.clear();
    for (int s = 0; s < 4; ++s) {
        for (int r = 2; r <= 14; ++r) {
            cards.push_back(Card{ static_cast<Suit>(s), static_cast<Rank>(r) });
        }
    }
}

void Deck::shuffle() {
    shuffle(cards.begin(), cards.end(), rng);
}

Card Deck::deal() {
    Card c = cards.back();
    cards.pop_back();
    return c;
}
