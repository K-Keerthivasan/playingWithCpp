-- Player.lua

-- Load the io library, which contains the print function
io = require("io")

-- Rest of your Lua script...
player:getPlayerStats("John Doe", 123)
print("Player Name:", player:getPlayerName())
print("Player ID:", player:getPlayerID())
print("Player Location:", player:getPlayerLocation().x, player:getPlayerLocation().y, player:getPlayerLocation().z)
