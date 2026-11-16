#include "Card.h"

using namespace std;

static const char* suit_names[] = { "C", "D", "H", "S" };
static const char* rank_names[] = { "", "", "2", "3", "4", "5","6","7","8","9","10","J","Q","K","A" };

string Card::toString() const {
    return string(rank_names[static_cast<int>(rank)]) + suit_names[static_cast<int>(suit)];
}