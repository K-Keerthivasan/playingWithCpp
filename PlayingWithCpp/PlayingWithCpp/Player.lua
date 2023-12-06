-- Importing the cPlayer class
local cPlayer = require("cPlayer")

-- Creating a new instance of cPlayer
local player = cPlayer()

-- Testing the setPlayerPosition method
player:setPlayerPosition(10, 20, 30)

-- Testing the SetPlayer method
player:SetPlayer("Player1")

-- Testing the playerState method
local state = player:playerState()

-- Testing the position method
local position = player:position()

-- Testing the isAlive method
local isAlive = player:isAlive()

-- Testing the isJumping method
local isJumping = player:isJumping()

-- Testing the isMoving method
local isMoving = player:isMoving()

-- Printing the results
print("Player state: ", state)
print("Player position: ", position)
print("Is player alive: ", isAlive)
print("Is player jumping: ", isJumping)
print("Is player moving: ", isMoving)
