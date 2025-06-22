#pragma once
#include "Card.h"

class Deck
{

public:
	Deck();
	void Initialize();
	void Shuffle();

	Card Deal(int index);


private:
	Card m_cards[52];
};

