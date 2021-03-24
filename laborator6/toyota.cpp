#include "Toyota.h"
#include "Car.h"
Toyota::Toyota()
{
	Setfuelconsmp(4);
	Setfuelcap(35);
	Setavgspeedrain(60);
	Setavgspeedsnow(30);
	Setavgspeedsunny(90);
}

void Toyota::Set()
{

}

int Toyota::Gettimpterminare()
{
	return timpterminare;
}
void Toyota::Settimpterminare(int value)
{
	timpterminare = value;
}

void Toyota::Setfuelcap(int value)
{
	fuelcap = value;
}
int Toyota::Getfuelcap()
{
	return fuelcap;
}
void Toyota::Setfuelconsmp(int value)
{
	fuelconsmp = value;
}
int Toyota::Getfuelconsmp()
{
	return fuelconsmp;

}
void Toyota::Setavgspeedrain(int value)
{
	avgspeedrain = value;
}
int Toyota::Setavgspeedrain()
{
	return avgspeedrain;
}
void Toyota::Setavgspeedsnow(int value)
{
	avgspeedsnow = value;
}
int Toyota::Getavgspeedsnow()
{
	return avgspeedsnow;
}
void Toyota::Setavgspeedsunny(int value)
{
	avgspeedsunny = value;
}
int Toyota::Getavgspeedsunny(int value)
{
	return avgspeedsunny;
}