// GoFish.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "GameSetup.h"
#include "Dealer.h"
#include "Card.h"
#include "Player.h"

int main()
{
	GameSetup gameSetup;
	gameSetup.print_players_name();
	//gameSetup.print_table_two_players();
	Dealer dealer;
	dealer.build_game_deck();
	dealer.print_deck();
	dealer.shuffle_deck();
	dealer.print_deck();
	



	// LATER...
	// determine table setup
	// print table setup
	// based off of table setup,
	//		determine who is 
	//		right of dealer
	// ask them to cut the deck
	//		that user will say no 
	//		("tap") or yes
	// then implement an interface 
	// 	   to cut the deck
	// then the deck will be modified
	// 	   to reflect the cut
	// 
	// 
	//		

}

