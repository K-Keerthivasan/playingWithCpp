#include "AudioClass.h"

#include <iostream>
#include <ostream>

AudioClass::AudioClass(bool isPlaying, int audioNumber)
{
		this->isPlaying = isPlaying;
	this->audioNumber = audioNumber;
}

AudioClass::AudioClass()
{
}


AudioClass::~AudioClass()
{
}

void AudioClass::mediaPlayer(std::string audioName, std::string audioChannel)
{
		std::cout << "Playing " << audioName << " on " << audioChannel << std::endl;
}
