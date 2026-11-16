#include "Table.h"

using namespace std;

Table::Table(const vector<string>& names) {
    for (auto& n : names) players.emplace_back(n);
}

void Table::dealInitial(int cardsPerPlayer) {
    deck.reset();
    deck.shuffle();
    for (int i = 0; i < cardsPerPlayer; ++i) {
        for (auto& p : players) p.receive(deck.deal());
    }
}

void Table::showAllHands() const {
    for (auto& p : players) p.showHand();
}