#include <iostream>
#include <map>
 
#include "cPlayer.h"
#include <sol/sol.hpp>
 
 
//TODO
//Get used to pointers
//Vectors
//Maps
//Classes and Objects

//--------------------------------------------------------------------------------

//Abstract factory pattern
//Builder pattern
//Command function
//basic physics calculations


void bind_cPlayer (sol::state&lua )
{
	lua.new_usertype<cPlayer>("cPlayer",
				"setPlayerPosition", &cPlayer::setPlayerPosition,
				"SetPlayer", &cPlayer::SetPlayer,
				"playerState", &cPlayer::playerState,
				"position", &cPlayer::position,
				"isAlive", &cPlayer::isAlive,
				"isJumping", &cPlayer::isJumping,
				"isMoving", &cPlayer::isMoving
			);

}

//So map has to things there
int main()
{
	//std::cout << "this is a test program for maps and everything"<<std::endl;

	////AudioClass audioInstance;
 //
	//AudioClass* audioClass = new AudioClass(); // This is how you create a pointer

	//AudioClass audioNormal;// This is how you create a pointer with parameters

 //audioClass->mediaPlayer("test", "test2"); // This is how you call a function from a pointer

	//std::map<std::string, int> newMap; // This is how you create a map

	//newMap["test"] = 1; // This is how you add a value to a map

	//newMap["test2"] = 2;


//--------------------------------------------------------------------------------



	sol::state lua;

	bind_cPlayer(lua);

	lua.script_file("Player.lua");

	return 0;

}