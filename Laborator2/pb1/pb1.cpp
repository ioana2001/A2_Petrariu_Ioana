#include <iostream>
#include "NumberList.h"

void main()
{
	NumberList L1;
	L1.Init();
	L1.Add(5);
	L1.Add(10);
	L1.Add(6);
	L1.Add(1);
	L1.Sort();
	L1.Print();
}