#pragma once
#include "Weather.h"
class Circuit
{
	int length;
	Weather vreme;
	Car* vcars[100];
	int nrcars;
public:
	int SetLength(int value);
	int SetWeather(Weather x);
	void AddCar(Car* obj);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};