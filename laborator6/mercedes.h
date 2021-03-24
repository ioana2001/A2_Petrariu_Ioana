#pragma once
#include "Car.h"
class Mercedes :public Car
{
public:
	void Set();
	Mercedes();
	void Setfuelcap(int value);
	int Getfuelcap();
	void Setfuelconsmp(int value);
	int Getfuelconsmp();
	void Setavgspeedrain(int value);
	int Setavgspeedrain();
	void Setavgspeedsnow(int value);
	int Getavgspeedsnow();
	void Setavgspeedsunny(int value);
	int Getavgspeedsunny(int value);
	int Gettimpterminare();
	void Settimpterminare(int value);

};
