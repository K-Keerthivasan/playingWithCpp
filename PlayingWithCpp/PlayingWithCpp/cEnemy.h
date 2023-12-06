#pragma once
#include <vector>
#include <glm/glm.hpp>
#include "iEnemy.h"
class cEnemy
{
public:
	cEnemy();
	~cEnemy();

	glm::vec3 position;
	bool isDead;

	bool bNoticedPlayer;

	enum eEnemyState
	{
		IDLE,
		SEEK,
		FLEE,
		ATTACK,
		DEAD
	};


	eEnemyState defaultState = IDLE;

	std::vector<iEnemy*> vecRobots;



};

