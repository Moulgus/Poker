#pragma once

enum class Color
{
    Hearts,
    Spades,
    Diamonds,
    Cubes,

    Size
};

enum class Value
{
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace,

    Size
};

struct Card
{
    Color color;
    Value value;
};