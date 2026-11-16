#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(const string& n) : name(n) {}

void Player::receive(Card c) {
    hand.push_back(c);
}

void Player::showHand() const {
    cout << name << "'s hand: ";
    for (auto& c : hand) cout << c.toString() << " ";
    cout << endl;
}

string Player::getName() const {
    return name;
}

void Player::clearHand() {
    hand.clear();
}
