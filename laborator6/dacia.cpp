#include "Dacia.h"
#include "Car.h"

Dacia::Dacia()
{
    Setfuelconsmp(4);
    Setfuelcap(35);
    Setavgspeedrain(60);
    Setavgspeedsnow(30);
    Setavgspeedsunny(90);
}

int Dacia::Gettimpterminare()
{
    return timpterminare;
}
void Dacia::Settimpterminare(int value)
{
    timpterminare = value;
}

void Dacia::Set()
{
}
void Dacia::Setfuelcap(int value)
{
    fuelcap = value;
}
int Dacia::Getfuelcap()
{
    return fuelcap;
}
void Dacia::Setfuelconsmp(int value)
{
    fuelconsmp = value;
}
int Dacia::Getfuelconsmp()
{
    return fuelconsmp;

}
void Dacia::Setavgspeedrain(int value)
{
    avgspeedrain = value;
}
int Dacia::Setavgspeedrain()
{
    return avgspeedrain;
}
void Dacia::Setavgspeedsnow(int value)
{
    avgspeedsnow = value;
}
int Dacia::Getavgspeedsnow()
{
    return avgspeedsnow;
}
void Dacia::Setavgspeedsunny(int value)
{
    avgspeedsunny = value;
}
int Dacia::Getavgspeedsunny(int value)
{
    return avgspeedsunny;
}