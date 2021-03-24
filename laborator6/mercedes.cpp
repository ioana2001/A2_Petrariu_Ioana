#include "Mercedes.h"
#include "Car.h"
Mercedes::Mercedes()
{
	Setfuelconsmp(4);
	Setfuelcap(35);
	Setavgspeedrain(60);
	Setavgspeedsnow(30);
	Setavgspeedsunny(90);
}

void Mercedes::Set()
{
}

int Mercedes::Gettimpterminare()
{
	return timpterminare;
}
void Mercedes::Settimpterminare(int value)
{
	timpterminare = value;
}
void Mercedes::Setfuelcap(int value)
{
	fuelcap = value;
}
int Mercedes::Getfuelcap()
{
	return fuelcap;
}
void Mercedes::Setfuelconsmp(int value)
{
	fuelconsmp = value;
}
int Mercedes::Getfuelconsmp()
{
	return fuelconsmp;

}
void Mercedes::Setavgspeedrain(int value)
{
	avgspeedrain = value;
}
int Mercedes::Setavgspeedrain()
{
	return avgspeedrain;
}
void Mercedes::Setavgspeedsnow(int value)
{
	avgspeedsnow = value;
}
int Mercedes::Getavgspeedsnow()
{
	return avgspeedsnow;
}
void Mercedes::Setavgspeedsunny(int value)
{
	avgspeedsunny = value;
}
int Mercedes::Getavgspeedsunny(int value)
{
	return avgspeedsunny;
}