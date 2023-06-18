#include "Radio.h"

Radio::Radio()
{
	volume = 10;
	channels = 1.1;
	state = 0;
}

Radio::Radio(float channel)
{
	volume = 10;
	channels = channel;
	state = 0;
}

bool Radio::isEnabled()
{
	return state;
}

void Radio::enable()
{
	state = 1;
}

void Radio::disable()
{
	state = 0;
}

int Radio::getVolume()
{
	return volume;
}

void Radio::setVolume(int percent)
{
	volume = percent;
}

float Radio::getChannel()
{
	return channels;
}

void Radio::setChannel(float channel)
{
	channels = channel;
}
