#pragma once
#include <string>

class AudioClass
{
	public:
	AudioClass(bool isPlaying,int audioNumber);
	AudioClass();
	~AudioClass();

	void mediaPlayer(std::string audioName, std::string audioChannel);

	private:
	bool isPlaying;
	bool isPaused;
	int audioNumber;
	std::string audioName;
	std::string audioChannel;


};

