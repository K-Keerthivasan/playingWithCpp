#pragma once
#include <glm/vec3.hpp>

class cPlayer
{
	//This class has all the simple player stuff you need
	public:
	cPlayer();
	~cPlayer();

	void setPlayerPosition(glm::vec3 position);
	void SetPlayer(cPlayer* player);

	bool playerState(bool playerState);

	glm::vec3 position;
	bool isAlive;
	bool isJumping;
	bool isMoving;

	private:
	cPlayer* player;


};

