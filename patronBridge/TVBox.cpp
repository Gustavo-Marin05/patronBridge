#include "TVBox.h"

TVBox::TVBox()
{
	volume = 10;
	state = 0;
	currentService = 1;
}

TVBox::TVBox(int channel)
{
	volume = 10;
	state = 0;
	currentService = channel;
}

bool TVBox::isEnabled()
{
	return state;
}

void TVBox::enable()
{
	state = 1;
}

void TVBox::disable()
{
	state = 0;
}

int TVBox::getVolume()
{
	return volume;
}

void TVBox::setVolume(int percent)
{
	volume = percent;
}

float TVBox::getChannel()
{
	return currentService;
}

void TVBox::setChannel(float channel)
{
	currentService = channel;
}
