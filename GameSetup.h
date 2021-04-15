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
		void create_players_vector(int playerNum);
		void print_player_names();

};

