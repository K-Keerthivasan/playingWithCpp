#include "cPlayer.h"

cPlayer::cPlayer()
{
}

cPlayer::~cPlayer()
{
}

void cPlayer::setPlayerPosition(glm::vec3 position)
{
	this ->position = position;
}

void cPlayer::SetPlayer(cPlayer* player)
{
		this->player = player;
}

bool cPlayer::playerState(bool playerState)
{
		return playerState;
}
