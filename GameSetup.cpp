#include "GameSetup.h"

GameSetup::GameSetup() {
	int playerNum;
	std::cout << "How many players?" << std::endl;
	std::cin >> playerNum;
	bool isPlayerNumValid = is_player_num_valid(playerNum);
	if (isPlayerNumValid) {
		std::cout << playerNum << " players selected" << '\n' << std::endl;
	} else {
		std::cout << "you entered a bogus player number" << std::endl;
	}
	bool vectorMatchesPlayers = create_players_vector(playerNum);
	// if vector player objects match  playerNum, set playersCreated
	if (vectorMatchesPlayers) { 
		playersCreated = playerNum; 
		get_players_name();
	} else {
		std::cout << "vector/player error, exit now" << std::endl;
	}
}

bool GameSetup::create_players_vector(int playerNum) {
	for (int i = 0; i < playerNum; i++) {
		players.push_back(Player());
	}
	// if num of players == size of players vector, true
	return (playerNum == players.size());
}

void GameSetup::get_players_name() {
	int playerNumTemp = 1;
	std::string nameTemp;
	for (std::vector<Player>::iterator it = players.begin();
		it != players.end(); it++) {
		std::cout << "Player " << playerNumTemp << " enter your name"
			<< std::endl;
		std::cin >> nameTemp;
		it->set_player_name(nameTemp);
		playerNumTemp++;
	}
}

void GameSetup::print_players_name() {
	std::cout << "\nWelcome to Go Fish ";
	for (auto &i : players) {
		std::cout << i.get_player_name();
		if (!(&i == &players.back())) { std::cout << ","; }
	}
}

bool GameSetup::is_player_num_valid(int playerNum) {
	
	return ((PLAYER_NUM_MIN <= playerNum) &&
				(playerNum <= PLAYER_NUM_MAX));
}

//void GameSetup::print_table_two_players() {
//	using namespace std;
//
//	cout << "												\n";											
//	cout << "												\n";
//	cout << "              -------------		            \n";
//	cout << "             /             \\                  \n";
//	cout << "            /               \\                 \n";
//	cout << "           /                 \\                \n";
//	cout << "           |                 |                 \n";
//	cout << "           |                 |                 \n";
//	cout << "           |                 |                 \n";
//	cout << "            \\               /                 \n";
//	cout << "             \\             /                  \n";
//	cout << "              \\           /                   \n";
//	cout << "               ------------		            \n";
//	cout << "                  Dealer					 	\n";
//}
