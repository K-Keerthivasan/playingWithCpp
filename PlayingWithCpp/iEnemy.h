#pragma once
#include "iMediator.h"

class iEnemy: public iMediator
{
public:
	virtual ~iEnemy();

	virtual void Attack(void) = 0;
	virtual unsigned int getUniqueID(void) = 0;

	//Getting this from the iMediator
	virtual sMessageSender getMessage(sMessageSender theMessage) = 0;
	virtual void receiveMessage(sMessageSender theMessage) = 0;
};
