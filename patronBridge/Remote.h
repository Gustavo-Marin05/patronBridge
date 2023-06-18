#pragma once

#include <iostream>
#include "Device.h"
using namespace std;

class Remote
{
protected:
	Device* device;
public:
	Remote();
	Remote(Device* _device);
	Device* getDevice() { return device; }
	void setDevice(Device* _device) { device = _device; }
	void togglePower();
	void volumeDown();
	void volumeUp();
	void channelDown();
	void channelUp();
};

