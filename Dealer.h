#pragma once
#include <vector>
#include <algorithm>
#include <random>
#include <string>
#include "Card.h"


class Dealer
{
	public:
		std::vector<Card> gameDeck;
		const int DECK_MAX = 52;
		const int SUIT_MAX = 4;
		const int FACE_MAX = 15;

	public:
		Dealer();
		void build_game_deck();
		void print_deck();
		void shuffle_deck();
		// add function for how many cards are left in the game
};

