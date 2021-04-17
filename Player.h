#pragma once
#include <vector>
#include "Card.h"

class Player
{
	public:
		std::vector<Card> playerHand;
		/*std::string playerName;*/
		const int TWO_PLAYER_CARD_NUM_MAX = 7;
		const int CARD_NUM_MAX = 5;
		int isAskingPlayerNumber = 0;
		int isAskingForFace = 0;
		int booksWon = 0;
		int playerNumber = -1;
		bool isPlayerTurn = false;
		bool isGoingAgain = false;

	private:
		std::string playerName;


	public:
		Player();
		std::string get_player_name();
		void set_player_name(std::string name);
		Player(std::string name);

};

