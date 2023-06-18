#include <iostream>
#include <vector>
#include "Device.h"
#include "Radio.h"
#include "TV.h"
#include "TVBox.h"
#include "Remote.h"
#include "AdvancedRemote.h"

using namespace std;

int main() {
	vector<channel> _channels;
	_channels.push_back(channel(1, "Fox"));
	_channels.push_back(channel(2, "h&h"));
	_channels.push_back(channel(3, "TLC"));
	_channels.push_back(channel(4, "E Entertaiment TV"));
	_channels.push_back(channel(5, "Food Network"));
	_channels.push_back(channel(6, "AMC"));
	_channels.push_back(channel(7, "ID"));
	_channels.push_back(channel(8, "TNT Series"));
	_channels.push_back(channel(9, "TBS"));
	_channels.push_back(channel(10, "Comedy Central"));
	_channels.push_back(channel(11, "A&E"));
	_channels.push_back(channel(12, "History"));
	_channels.push_back(channel(13, "Warner TV"));
	_channels.push_back(channel(14, "AXN"));
	_channels.push_back(channel(15, "Sony"));
	_channels.push_back(channel(16, "Star Channel"));
	_channels.push_back(channel(17, "FX"));
	_channels.push_back(channel(18, "Discovery Channel"));
	_channels.push_back(channel(19, "National Geographic"));
	_channels.push_back(channel(20, "TRU TV"));
	_channels.push_back(channel(21, "Golden"));
	_channels.push_back(channel(22, "Cinemax"));
	_channels.push_back(channel(23, "Space"));
	_channels.push_back(channel(24, "Universal TV"));
	_channels.push_back(channel(25, "ESPN"));
	TV* tv = new TV(_channels);
	Remote remote(tv);
	cout << "Estado de la tv: " << tv->isEnabled() << endl;
	remote.togglePower();
	cout << "Estado de la tv: " << tv->isEnabled() << endl;
	cout << "Canal: " << tv->getChannel() << endl;
	remote.channelDown();
	remote.channelDown();
	remote.channelDown();
	remote.channelDown();
	remote.channelDown();
	cout << "Canal: " << tv->getChannel() << endl;
	int chan = tv->getChannel()-1;
	cout << "Nombre del canal actual: " << tv->channels[chan].nombre << endl;
	cout << "Volumen: " << tv->getVolume() << endl;
	remote.volumeUp();
	cout << "Volumen: " << tv->getVolume() << endl;
	remote.volumeUp();
	cout << "Volumen: " << tv->getVolume() << endl;
	remote.volumeUp();
	cout << "Volumen: " << tv->getVolume() << endl;
	TVBox* tvBox = new TVBox();
	AdvancedRemote advancedremote(tvBox);
	cout << "Estado de la tvBox: " << tvBox->isEnabled() << endl;
	advancedremote.togglePower();
	cout << "Estado de la tvBox: " << tvBox->isEnabled() << endl;
	cout << "Canal: " << tvBox->getChannel() << endl;
	advancedremote.channelUp();
	advancedremote.channelUp();
	advancedremote.channelUp();
	advancedremote.channelUp();
	advancedremote.channelUp();
	cout << "Canal: " << tvBox->getChannel() << endl;
	chan = tvBox->getChannel() - 1;
	cout << "Nombre del canal actual: " << tvBox->services.Peliculas[chan] << endl;
	cout << "Volumen: " << tvBox->getVolume() << endl;
	advancedremote.volumeUp();
	cout << "Volumen: " << tvBox->getVolume() << endl;
	advancedremote.volumeUp();
	cout << "Volumen: " << tvBox->getVolume() << endl;
	advancedremote.volumeUp();
	cout << "Volumen: " << tvBox->getVolume() << endl;
	advancedremote.mute();
	cout << "Volumen: " << tvBox->getVolume() << endl;
}