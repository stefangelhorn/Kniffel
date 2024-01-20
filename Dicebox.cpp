//Dicebox.cpp
#include <iostream>
	
#include "Dicebox.h"

	void Dicebox::shakeTheCup()
	{
		for(auto& dice : dices)
		{
			if(dice.putBack == false)
			{
				dice.rollDice();
			} 			
		}
	}

	void Dicebox::showDices()
	{
		for(auto& dice : dices)
		{
			if(dice.putBack == true)
			{
				std::cout << "[" << dice.getNumberOfPips() << "] "; 
			}
		}
		
		for(auto& dice : dices)
		{
			if(dice.putBack == false)
			{
				std::cout << "[" << dice.getNumberOfPips() << "] "; 
			}
		}		
	}
	
	void Dicebox::putBackDices()
	{
		
	}