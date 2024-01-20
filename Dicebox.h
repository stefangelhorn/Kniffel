// Dicebox.h
#ifndef DICEBOX_H
#define DICEBOX_H

#include "Dice.h"

class Dicebox
{
	public:
	Dice dices[5];
		void putBackDices();
		void shakeTheCup();
		void showDices();
};

#endif //DICEBOX_H