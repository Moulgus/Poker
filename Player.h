#pragma once
#include "Card.h"
class Player
{
private:

	Card m_hand[5];
	int m_PlayerMoney;
	int m_PlayeBet;

public:
	void AddCardToHand(Card card, int index);
	int BetMoney(int money);

};

