#pragma once
#include <string>


enum class SuitEnum { Diamonds, Hearts, Clubs, Spades };
enum class FaceEnum { Two =	2, Three = 3, Four = 4, Five = 5,
					  Six =	6, Seven = 7, Eight = 8, Nine = 9, 
					  Ten =	10, Jack = 11, Queen = 12, King = 13, 
					  Ace =	14 };

class Card
{
	public:
		FaceEnum face;
		SuitEnum suit;
		std::string faceStr;
		std::string suitStr;

	public:
		Card();
		Card(int _face_j, int _suit_i);	
		void face_enum_toString();
		void suit_enum_toString();
		void print_card();

};