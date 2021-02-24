#pragma once
#include <iostream>
#include "NumberList.h"

void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	if (count >= 9) return false;
	else {
		numbers[count] = x;
		count++;
		return true;
	}
}

void NumberList::Sort()
{
	int i, j;
	for (i = 0; i < count - 1; i++)
		for (j = i + 1; j < count; j++)
			if (numbers[i] > numbers[j])
			{
				int aux;
				aux = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = aux;
			}
}

void NumberList::Print()
{
	int i;
	for (i = 0; i < count; i++)
		printf("%d ", numbers[i]);
}