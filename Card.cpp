#include <iostream>
#include "Card.h"

Card::Card() {
	std::cout << "No param constructor" << std::endl;
}

Card::Card(int _face_j, int _suit_i) {

	switch (_face_j)
	{
		case 2:		face = FaceEnum::Two;	break;
		case 3:		face = FaceEnum::Three; break;
		case 4:		face = FaceEnum::Four;	break;
		case 5:		face = FaceEnum::Five;	break;
		case 6:		face = FaceEnum::Six;	break;
		case 7:		face = FaceEnum::Seven; break;
		case 8:		face = FaceEnum::Eight; break;
		case 9:		face = FaceEnum::Nine;	break;
		case 10:	face = FaceEnum::Ten;	break;
		case 11:	face = FaceEnum::Jack;	break;
		case 12:	face = FaceEnum::Queen; break;
		case 13:	face = FaceEnum::King;	break;
		case 14:	face = FaceEnum::Ace;	break;
		default:							break;
	}

	switch (_suit_i)
	{
		case 0:		suit = SuitEnum::Diamonds;	break;
		case 1:		suit = SuitEnum::Hearts;	break;
		case 2:		suit = SuitEnum::Clubs;		break;
		case 3:		suit = SuitEnum::Spades;	break;
		default:								break;
	}
	face_enum_toString();
	suit_enum_toString();
}

void Card::face_enum_toString() {

	std::string faceArray[] = {"Error", "Error","Two", "Three", "Four",
							   "Five", "Six", "Seven", "Eight", "Nine", 
							   "Ten", "Jack", "Queen", "King", "Ace" };

	faceStr = faceArray[static_cast<int>(face)];
}

void Card::suit_enum_toString() {

	std::string suitArray[] = {"Diamonds", "Hearts", "Clubs", "Spades"};

	suitStr = suitArray[static_cast<int>(suit)];
}

void Card::print_card() {
	std::cout << faceStr << " of " << suitStr;
}









