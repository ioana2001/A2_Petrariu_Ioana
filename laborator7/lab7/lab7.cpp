#include <iostream>

using namespace std;

double operator"" _Kelvin(const char* x)
{
    double value = 0;
    while ((*x) != 0)
    {
        value = value * 10 + (*x) - '0';
        x++;
    }
    value -= 273.15;
    return value;
}

double operator"" _Fahrenheit(const char* x)
{
    double value = 0;
    while ((*x) != 0)
    {
        value = value * 10 + (*x) - '0';
        x++;
    }
    value = (value - 32) / 1.8;
    return value;
}

int main()
{
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout << a << " " << b;
    return 0;
}
