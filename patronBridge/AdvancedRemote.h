#pragma once

#include <iostream>
#include "Remote.h"
using namespace std;

class AdvancedRemote: public Remote
{
public:
	AdvancedRemote(Device* device);
	void mute();
};

