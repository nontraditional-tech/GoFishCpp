#include "GameSetup.h"

GameSetup::GameSetup() {
	int playerNum;
	std::cout << "How many players?" << std::endl;
	std::cin >> playerNum;
	std::cout << playerNum << " players selected" << std::endl;
	create_players_vector(playerNum);
	// functionality for player info to be filled in, 
	// currently, only playerName will need to be 
	// entered for each player
}

// can use this for testing
void GameSetup::create_players_vector(int playerNum) {
	// for testing
	//std::string playerArray[] = { "Larry", "Curly", "Moe" };
	for (int i = 0; i < playerNum; i++) {
		// for testing
		//players.push_back(Player(playerArray[i]));
		players.push_back(Player());
	}
}

void GameSetup::print_player_names() {
	// look into if "&i" should just be "i"
	for (auto &i : players) {
		std::cout << i.playerName << std::endl;
	}
}




