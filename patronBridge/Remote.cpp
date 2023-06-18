#include "Remote.h"

Remote::Remote()
{

}

Remote::Remote(Device* _device)
{
	device = _device;
}

void Remote::togglePower()
{
	if (device->isEnabled()) {
		device->disable();
	}
	else
	{
		device->enable();
	}
}

void Remote::volumeDown()
{
	if (device->getVolume() > 10)
	{
		device->setVolume(device->getVolume() - 10);
	}
	else
	{
		device->setVolume(0);
	}
}

void Remote::volumeUp()
{

	if (device->getVolume() < 90)
	{
		device->setVolume(device->getVolume() + 10);
	}
	else
	{
		device->setVolume(100);
	}
}

void Remote::channelDown()
{
	if (device->getChannel() <= 1)
	{
		device->setChannel(device->getChannel() + 24);
	}
	else
	{
		device->setChannel(device->getChannel() - 1);
	}
}

void Remote::channelUp()
{
	if (device->getChannel() >= 25)
	{
		device->setChannel(device->getChannel() - 24);
	}
	else
	{
		device->setChannel(device->getChannel() + 1);
	}
}
