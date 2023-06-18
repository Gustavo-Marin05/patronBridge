#pragma once

#include <iostream>
#include <vector>
#include "Device.h"
using namespace std;

class Servicio
{
public:
	string nombre;
	vector<string> Peliculas = { "Goodfellas",
	"The Silence of the Lambs",
	"Reservoir Dogs",
	"La lista de Schindler",
	"The Shawshank Redemption",
	"Se7en",
	"Fargo",
	"La vida es bella",
	"Saving Private Ryan",
	"American Beauty",
	"Gladiator",
	"The Lord of the Rings: The Fellowship of the Ring",
	"The Pianist",
	"The Lord of the Rings: The Two Towers",
	"Mystic River",
	"Million Dollar Baby",
	"Brokeback Mountain",
	"The Departed",
	"No Country for Old Men",
	"Slumdog Millionaire",
	"Inglourious Basterds",
	"The Social Network",
	"The Artist",
	"Argo",
	"Gravity"};
public:
	Servicio() { nombre = ""; }
	Servicio(string nom) { nombre = nom; }
};

class TVBox: public Device
{
private:
	int volume;
	bool state;
	int	currentService;
public:
	Servicio services;
	TVBox();
	TVBox(int channel);
	bool isEnabled();
	void enable();
	void disable();
	int getVolume();
	void setVolume(int percent);
	float getChannel();
	void setChannel(float channel);
};