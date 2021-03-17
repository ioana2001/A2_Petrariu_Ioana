#include <iostream>
#define _CRT_SECURE_NO_WARNING
#include "number.h"

using namespace std;

int main()
{
    Number a("101", 2);
    Number b("101", 2);
    Number c("5",10);
    cout << (a <= c);
    return 0;
}