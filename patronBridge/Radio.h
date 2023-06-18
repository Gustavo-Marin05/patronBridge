#pragma once

#include <iostream>
#include <vector>
#include "Device.h"
using namespace std;

class Radio : public Device
{
private:
	int volume;
	float channels;
	bool state;
public:
	Radio();
	Radio(float channel);
	bool isEnabled();
	void enable();
	void disable();
	int getVolume();
	void setVolume(int percent);
	float getChannel();
	void setChannel(float channel);
};