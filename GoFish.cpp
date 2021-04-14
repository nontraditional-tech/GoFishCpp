// GoFish.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Dealer.h"
#include "Card.h"
#include "Player.h"

int main()
{
	Dealer dealer;
	dealer.build_game_deck();
	dealer.print_deck();
	dealer.shuffle_deck();
	dealer.print_deck();

}

