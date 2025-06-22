#include "Deck.h"
#include <stdlib.h>
#include <algorithm>
#include <ctime>


Deck::Deck()
{
	Initialize();
}

void Deck::Initialize()
{
	int CardsCounter = 0;
	for (int i = 0; i < (int)Color::Size; i++)
	{
		for (int j = 0; j < (int)Value::Size; j++)
		{
			m_cards[CardsCounter].color = (Color)i;
			m_cards[CardsCounter].value = (Value)j;

			CardsCounter++;
		}
	}
}

void Deck::Shuffle()
{
	srand(time(nullptr));
	const int size = (int)Color::Size * (int)Value::Size;
	for (int i = 0; i < size; i++)
	{
		int randomIndex = rand() % size;

		std::swap(m_cards[i], m_cards[i]);
	}
}

Card Deck::Deal(int index)
{
	Card card;
	card = m_cards[index];
	return card;
}
