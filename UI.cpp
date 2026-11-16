#include "UI.h"
#include <iostream>

using namespace std;

int UI::getPlayerCount() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;
    return n;
}

vector<string> UI::getPlayerNames(int n) {
    vector<string> names;
    for (int i = 1; i <= n; ++i) {
        cout << "Name of player " << i << ": ";
        string name;
        std::cin >> name;
        names.push_back(name);
    }
    return names;
}

void UI::announceWinner(const Player& p) {
    cout << "Winner: " << p.getName() << endl;
}