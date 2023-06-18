#pragma once

#include <iostream>
#include <vector>
#include "Device.h"
using namespace std;

class channel
{
public:
	int nro;
	string nombre;
public:
	channel() { nro = 0; nombre = ""; }
	channel(int n, string nom) { nro = n; nombre = nom; }
};

class TV : public Device
{
private: 
	int volume;
	bool state;
	string mark;
	int currentChannel;
public:
	vector <channel> channels;
	TV();
	TV(vector<channel> _channels);
	bool isEnabled();
	void enable();
	void disable();
	int getVolume();
	void setVolume(int percent);
	float getChannel();
	void setChannel(float channel);
};

