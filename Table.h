#pragma once
#include "Player.h"
class Table
{
private:
	const static int NumOfPlayers = 4;
	Player players[NumOfPlayers];

public:
	void BeginPlay();
};

