#include "Player.h"

void Player::AddCardToHand(Card card, int index)
{
	m_hand[index] = card;
}

int Player::BetMoney(int money)
{
	m_PlayerMoney -= money;
	m_PlayeBet = money;
	return money;
}
