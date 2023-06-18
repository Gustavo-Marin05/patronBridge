#pragma once

#include <iostream>
using namespace std;

class Device
{
public:
	virtual bool isEnabled() = 0;
	virtual void enable() = 0;
	virtual void disable() = 0;
	virtual int getVolume() = 0;
	virtual void setVolume(int percent) = 0;
	virtual float getChannel() = 0;
	virtual void setChannel(float channel) = 0;
};

