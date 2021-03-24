#pragma once
class Car
{
protected:
	int fuelcap;
	int fuelconsmp;
	int avgspeedrain;
	int avgspeedsnow;
	int avgspeedsunny;
	int timpterminare;
public:
	virtual void Set() = 0;
	virtual void Setfuelcap(int value)
	{
		fuelcap = value;
	}
	int Getfuelcap()
	{
		return fuelcap;
	}
	virtual void Setfuelconsmp(int value)
	{
		fuelconsmp = value;
	}
	 //
	int Gettimpterminare()
	{
		return timpterminare;
	}
	virtual void Settimpterminare(int value)
	{
		timpterminare = value;
	}
	//

	int Getfuelconsmp()
	{
		return fuelconsmp;

	}
	virtual void Setavgspeedrain(int value)
	{
		avgspeedrain = value;
	}
	int Setavgspeedrain()
	{
		return avgspeedrain;
	}
	virtual void Setavgspeedsnow(int value)
	{
		avgspeedsnow = value;
	}
	int Getavgspeedsnow()
	{
		return avgspeedsnow;
	}
	virtual void Setavgspeedsunny(int value)
	{
		avgspeedsunny = value;
	}
	int Getavgspeedsunny(int value)
	{
		return avgspeedsunny;
	}
};