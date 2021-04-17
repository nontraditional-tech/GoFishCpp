#pragma once
#include <iostream>
#include "Player.h"

class GameSetup
{
	public:
		std::vector<Player> players;
		int playersCreated;
		const int PLAYER_NUM_MIN = 2;
		const int PLAYER_NUM_MAX = 6;

	public:
		GameSetup();
		bool create_players_vector(int playerNum);
		void get_players_name();
		void print_players_name();

};

