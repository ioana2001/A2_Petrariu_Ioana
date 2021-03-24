#pragma once
#include "Car.h"

class Dacia : public Car
{
public:
	Dacia();
	void Set();
	void Setfuelcap(int value);
	int Getfuelcap();
	int Gettimpterminare();
	void Settimpterminare(int value);
	void Setfuelconsmp(int value);
	int Getfuelconsmp();
	void Setavgspeedrain(int value);
	int Setavgspeedrain();
	void Setavgspeedsnow(int value);
	int Getavgspeedsnow();
	void Setavgspeedsunny(int value);
	int Getavgspeedsunny(int value);
};
