#include <iostream>
#include "Car.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"
#include "Circuit.h"

using namespace std;

int Circuit::SetLength(int value)
{
	length = value;
	return 0;
}

int Circuit::SetWeather(Weather x)
{
	vreme = x;
	return 0;
}

void Circuit::AddCar(Car* obj)
{
	vcars[nrcars] = obj;
	nrcars++;
}

void Circuit::Race()
{
	float timpTerminareCircuit, consumCircuit;
	bool esteTerminat;
	
	for (int i = 0; i < nrcars; i++)
	{
		consumCircuit = length * (vcars[i].Getfuelconsmp / 100);
		if (consumCircuit <= vcars[i].Getfuelcap)
			esteTerminat = 1;
		else
		{
			esteTerminat = 0;
			vcars[i].Settimpterminare(10000);
		}

		if (esteTerminat == 1)
		{
			//if (vreme == 2)
				timpTerminareCircuit = length / vcars[i].Getavgspeedsunny;
			/*else
				if (vreme == 0)
					timpTerminareCircuit = length / vcars[i]->Getavgspeedrain;
				else
					if (vreme == 1)
						timpTerminareCircuit = length / vcars[i]->Getavgspeedsnow;*/

				vcars[i].Settimpterminare(timpTerminareCircuit);
			}
		}
}

void Circuit::ShowFinalRanks()
{
	for(int i=0;i<nrcars-1;i++)
		for(int j=i+1;j<nrcars;j++)
			if (vcars[i].Gettimpterminare > vcars[j].Gettimpterminare)
			{
				Car* aux;
				aux=vcars[i];
				vcars[i] = vcars[j];
				vcars[j] = aux;
			}
}

void Circuit::ShowWhoDidNotFinish()
{
	int i = nrcars - 1;
	while(i>=0 && vcars[i].Gettimpterminare==10000)
		cout<<i<<endl;
}