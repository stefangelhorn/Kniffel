// Dice.cpp
#include "Dice.h"
#include <random>
#include <time.h>

	Dice::Dice()
	{
		numberOfPips = 1;
		putBack = false;
	}

	void Dice::rollDice()
	{
		numberOfPips = (rand() % 6) + 1;
	}

	int Dice::getNumberOfPips()
	{
		return numberOfPips;
	}