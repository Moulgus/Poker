#pragma once
#ifndef CARD_H
#define CARD_H

#include <string>

enum class Suit { Clubs, Diamonds, Hearts, Spades };
enum class Rank { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

struct Card {
    Suit suit;
    Rank rank;
    std::string toString() const;
};

#endif // CARD_H
