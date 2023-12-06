#include <iostream>
#include <Lua5.4.6/lua.hpp>
#include <sol/sol.hpp>
#include "cPlayer.h"


int main ()
{
	printf("Hello World!"); // prints Hello World!

	sol::state lua; // create a lua state
	lua.open_libraries(sol::lib::base, sol::lib::package); // open some common libraries


	lua.new_usertype<cPlayer>("cPlayer",
		sol::constructors<cPlayer()>(),
		"getPlayerStats", &cPlayer::getPlayerStats,
		"getPlayerName", &cPlayer::getPlayerName
	);// create a new usertype named 'cPlayer' in the lua state

	cPlayer player;

	printf("\n");

	player.getPlayerStats("John Doe", 1);// set the player name to 'John Doe' and the player ID to 1
 

	lua["player"] = &player;// set the global variable 'player' to the address of the player object
 lua["playerID"]= &player.playerID;

	lua.script_file("player_stats.lua");// run the lua script from a file)



	//try {
	//	// Run the Lua script from a file
	//lua.script_file("Player.lua");

	//}
	//catch (const sol::error& e) {
	//	std::cerr << "Lua error: " << e.what() << std::endl;
	//}
return 0;
}