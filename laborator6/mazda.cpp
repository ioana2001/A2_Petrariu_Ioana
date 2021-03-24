#include "Mazda.h"
#include "Car.h"
Mazda::Mazda()
{
	Setfuelconsmp(4);
	Setfuelcap(35);
	Setavgspeedrain(60);
	Setavgspeedsnow(30);
	Setavgspeedsunny(90);
}

void Mazda::Set()
{
}
int Mazda::Gettimpterminare()
{
	return timpterminare;
}
void Mazda::Settimpterminare(int value)
{
	timpterminare = value;
}

void Mazda::Setfuelcap(int value)
{
	fuelcap = value;
}
int Mazda::Getfuelcap()
{
	return fuelcap;
}
void Mazda::Setfuelconsmp(int value)
{
	fuelconsmp = value;
}
int Mazda::Getfuelconsmp()
{
	return fuelconsmp;

}
void Mazda::Setavgspeedrain(int value)
{
	avgspeedrain = value;
}
int Mazda::Setavgspeedrain()
{
	return avgspeedrain;
}
void Mazda::Setavgspeedsnow(int value)
{
	avgspeedsnow = value;
}
int Mazda::Getavgspeedsnow()
{
	return avgspeedsnow;
}
void Mazda::Setavgspeedsunny(int value)
{
	avgspeedsunny = value;
}
int Mazda::Getavgspeedsunny(int value)
{
	return avgspeedsunny;
}