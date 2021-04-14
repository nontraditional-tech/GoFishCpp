#pragma once
#include <vector>
#include "Card.h"

class Player
{
	public:
		std::vector<Card> playerHand;
		std::string playerName;
		const int PLAYER_NUM_MIN = 2;
		const int PLAYER_NUM_MAX = 6;
		const int TWO_PLAYER_CARD_NUM_MAX = 7;
		const int CARD_NUM_MAX = 5;
		int isAskingPlayerNumber;
		int isAskingForFace;
		int booksWon;
		int playerNumber;
		bool isPlayerTurn;
		bool isGoingAgain;
};

