#include <iostream>
#include "UI.h"
#include "Game.h"

int main() {
    int num = UI::getPlayerCount();
    auto names = UI::getPlayerNames(num);
    Game game(names);
    game.playRound();
    return 0;
}