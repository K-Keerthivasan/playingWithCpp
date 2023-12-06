#pragma once
#include <string>
#include <vector>


struct sMessageSender
{
	unsigned int someUniqueID;
	std::string someMessageData;
	std::vector<std::string> someMessageDataVector;
};

class iMediator
{
public:
	virtual sMessageSender getMessage(sMessageSender theMessage) = 0; // This is a pure virtual function as it does not do anything
	virtual void receiveMessage(sMessageSender theMessage) = 0;
};