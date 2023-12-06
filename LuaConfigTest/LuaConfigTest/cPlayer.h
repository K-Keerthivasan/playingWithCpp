#pragma once
#include <string>
#include <glm/glm.hpp>
class cPlayer
{
	public:
	cPlayer();
	~cPlayer();

	void getPlayerStats(std::string playerName,int playerID);

	glm::vec3 playerLocation;

	const std::string& getPlayerName() const;
	int playerID;

 

	private:

	std::string player_name;


};

