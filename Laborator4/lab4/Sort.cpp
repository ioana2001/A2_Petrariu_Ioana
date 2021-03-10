#include <iostream>
#include <list>
#include <stdarg.h>
#include <string.h>
#include "Sort.h"

using namespace std;

Sort::Sort(int n, int min1, int max1)
{
    for (int i = 0; i < n; i++)
    {
        a.push_back(rand() % (max1 - min1 + 1) + min1);
    }
}

Sort::Sort()
{
    for (int i = 0; i < 100; i++)
    {
        a.push_back(0);
    }
}

void Sort::Print()
{
    for (list<int>::iterator i = a.begin(); i != a.end(); ++i)
        cout << *i << " ";
}

Sort::Sort(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a.push_back(v[i]);
    }
}

Sort::Sort(int count, ...)
{
    va_list arg;
    va_start(arg, count);
    for (int i = 0; i < count; ++i)
    {
        a.push_back(va_arg(arg, int));
    }
    va_end(arg);
}

Sort::Sort(char v[100])
{
    char* p;
    char* np = 0;
    int nr;
    p = strtok_s(v, ",", &np);
    while (p != NULL)
    {
        nr = 0;
        for (int i = 0; i < strlen(p); i++)
        {
            nr = nr * 10 + p[i] - '0';
        }
        a.push_back(nr);
        p = strtok_s(NULL, ",", &np);
    }

}

int  Sort::GetElementsCount()
{
    int nr = 0;
    for (list<int>::iterator i = a.begin(); i != a.end(); ++i)
        nr++;
    return nr;
}

int  Sort::GetElementFromIndex(int index)
{
    list<int>::iterator i = a.begin();
    int k = 0;
    while (k < index && i != a.end())
    {
        i++;
        k++;
    }
    return *i;
}

