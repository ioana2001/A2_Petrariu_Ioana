#include "Ford.h"
#include "Car.h"
Ford::Ford()
{
	Setfuelconsmp(4);
	Setfuelcap(35);
	Setavgspeedrain(60);
	Setavgspeedsnow(30);
	Setavgspeedsunny(90);
}

void Ford::Set()
{
}

int Ford::Gettimpterminare()
{
	return timpterminare;
}
void Ford::Settimpterminare(int value)
{
	timpterminare = value;
}
void Ford::Setfuelcap(int value)
{
	fuelcap = value;
}
int Ford::Getfuelcap()
{
	return fuelcap;
}
void Ford::Setfuelconsmp(int value)
{
	fuelconsmp = value;
}
int Ford::Getfuelconsmp()
{
	return fuelconsmp;

}
void Ford::Setavgspeedrain(int value)
{
	avgspeedrain = value;
}
int Ford::Setavgspeedrain()
{
	return avgspeedrain;
}
void Ford::Setavgspeedsnow(int value)
{
	avgspeedsnow = value;
}
int Ford::Getavgspeedsnow()
{
	return avgspeedsnow;
}
void Ford::Setavgspeedsunny(int value)
{
	avgspeedsunny = value;
}
int Ford::Getavgspeedsunny(int value)
{
	return avgspeedsunny;
}