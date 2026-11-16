#ifndef UI_H
#define UI_H

#include <vector>
#include <string>
#include "Player.h"

class UI {
public:
    static int getPlayerCount();
    static std::vector<string> getPlayerNames(int n);
    static void announceWinner(const Player& p);
};

#endif // UI_H