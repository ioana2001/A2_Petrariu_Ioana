#include "math.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int Math::Add(int x, int y)
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

double Math::Add(double x, double y)
{
	return x + y;
}

double Math::Add(double x, double y, double z)
{
	return x + y;
}

int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

double Math::Mul(double x, double y)
{
	return x * y;
}

double Math::Mul(double x, double y, double z)
{
	return x * y * z;
}

double Math::Add(int x, double y)
{
	return x + y;
}

int Math::Add(int count, ...) 
{
	int rez = 0;
	va_list arg;
	va_start(arg, count);
	for (int i = 0; i < count; ++i)
	{
		rez += va_arg(arg, int);
	}
	va_end(arg);
	return rez;
}

char* Math::Add(const char* sir1, const char* sir2)
{
	char* s = (char*)malloc(1 + strlen(sir1) + strlen(sir2));
	strcpy(s, sir1);
	strcat(s, sir2);
	return s;
}