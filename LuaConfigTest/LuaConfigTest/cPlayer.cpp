#include "cPlayer.h"

cPlayer::cPlayer()
{
}

cPlayer::~cPlayer()
{
}

void cPlayer::getPlayerStats(std::string playerName, int playerID)
{
	this->player_name = playerName;
	this->playerID = playerID;
 
}

// Getter for player_name
const std::string& cPlayer::getPlayerName() const {
    return player_name;
}

 