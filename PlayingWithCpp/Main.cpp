#include <iostream>
#include <map>
#include "Lua5.4.6/lua.h" 
#include "Lua5.4.6/lualib.h"
#include "Lua5.4.6/lauxlib.h"
#include "AudioClass.h"
#include "AudioClass.cpp"

 
 
//TODO
//Get used to pointers
//Vectors
//Maps
//Classes and Objects

//--------------------------------------------------------------------------------

//Abstract factory patter
//Builder pattern
//Command function
//basic physics calculations


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


	//Test how lua works
lua_State* L = luaL_newstate();
luaL_openlibs(L);




	return 0;

}