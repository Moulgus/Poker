#include "Table.h"

void Table::BeginPlay()
{
	int CardIndex = 0;
	for (int i = 0; i < NumOfPlayers; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			players[i].AddCardToHand[j];

		}
	}
}
