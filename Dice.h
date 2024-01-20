// Dice.h
#ifndef DICE_H
#define DICE_H
#include <random>
#include <time.h>

class Dice
{	
	public:
	int numberOfPips;
	bool putBack;
	
	Dice();
	void rollDice();
	int getNumberOfPips();
};


#endif // DICE_H