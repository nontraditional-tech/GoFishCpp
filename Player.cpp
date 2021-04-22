#include "Player.h"


Player::Player() {}

Player::Player(std::string name) {
	playerName = name;
}

std::string Player::get_player_name() {
	return playerName;
}

void Player::set_player_name(std::string name) {
	playerName = name;
}
