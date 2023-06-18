#include "TV.h"

vector<channel> _channels;

TV::TV()
{
	volume = 10;
	state = 0;
	mark = "";
	currentChannel = 1;
}

TV::TV(vector<channel> _channels)
{
	channels = _channels;
	volume = 10;
	state = 0;
	mark = "Samsumg";
	currentChannel = 1;
}

bool TV::isEnabled()
{
	return state;
}

void TV::enable()
{
	state = 1;
}

void TV::disable()
{
	state = 0;
}

int TV::getVolume()
{
	return volume;
}

void TV::setVolume(int percent)
{
	volume = percent;
}

float TV::getChannel()
{
	return channels[currentChannel-1].nro;
}

void TV::setChannel(float channel)
{
	currentChannel = channel;
}
