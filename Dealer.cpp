#include <iostream>
#include "Dealer.h"


Dealer::Dealer() {}

void Dealer::build_game_deck() {
	for (int suit_i = 0; suit_i < SUIT_MAX; suit_i++) {
		for (int face_j = 2; face_j < FACE_MAX; face_j++) {
			gameDeck.push_back(Card(face_j, suit_i));
		}
	}
}

void Dealer::print_deck() {
	std::cout << std::endl << std::endl;
	for (auto i : gameDeck) {
		i.print_card();
		std::cout << '\n';
	}		
}

void Dealer::shuffle_deck() {
	auto rng = std::default_random_engine{};
	std::shuffle(std::begin(gameDeck), std::end(gameDeck), rng);
}

// add function for how many cards are left in the game


