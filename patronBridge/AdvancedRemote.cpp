#include "AdvancedRemote.h"

AdvancedRemote::AdvancedRemote(Device* device) : Remote(device)
{
}

void AdvancedRemote::mute()
{
	device->setVolume(0);
}
