#include "Game.h"
#include "UI.h"

using namespace std;

Game::Game(const ::vector<::string>& names) : table(names) {}

int Game::evaluateHand(const ::vector<Card>& hand) {
    int score = 0;
    for (auto& c : hand) score += static_cast<int>(c.rank);
    return score;
}

void Game::playRound() {
    for (auto& p : table.players) p.clearHand();
    table.dealInitial();
    table.showAllHands();
    int best = -1;
    Player* winner = nullptr;
    for (auto& p : table.players) {
        int val = evaluateHand(p.hand);
        if (val > best) {
            best = val;
            winner = &p;
        }
    }
    if (winner) UI::announceWinner(*winner);
}
