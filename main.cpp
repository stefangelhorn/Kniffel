// main.cpp
#include "Dice.h"
#include "Dicebox.h"
#include <iostream>

int menu();

int main()
{
	srand(time(nullptr));

	Dicebox cup;

	while(true)
	{
		cup.shakeTheCup();
		cup.showDices();
	
		int choice = menu();
		switch(choice)
		{
			case 1: 
		}
	}	
		
	return 0;
}


int menu()
{
	std::cout << "Please choose:\n"
			  << "<1> put back dices\n"
			  << "<2> shake the cup\n"
			  << "<3> quit the game\n";
	int input;
	std::cin >> input;
	return input;
}