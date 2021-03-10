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


void Sort::BubbleSort(bool ascendent)
{
    bool ok;
    int aux;
    do {
        ok = 0;
        for (int k = 0; k < a.size(); k++)
        {
            list<int>::iterator i = a.begin();
            list<int>::iterator j = a.begin();

            int index1 = k - 1, index2 = k;
            int contor = 0;
            while (contor < index1 && i != a.end())
            {
                i++;
                contor++;
            }

            contor = 0;
            while (contor < index2 && j != a.end())
            {
                j++;
                contor++;
            }
            
            if (*i > *j)
            {
                int aux;
                aux = *i;
                *i = *j;
                *j = aux;
                ok = 1;
            }
        }
    } while (ok == 1);
}

void Sort::InsertSort(bool ascendent)
{
    int i, j, key;
    for (i = 0; i < a.size(); i++)
    {
        list<int>::iterator i1 = a.begin();
        list<int>::iterator j1 = a.begin();
        list<int>::iterator key1 = a.begin();
        int contor = 0;
        while (contor < i && i1 != a.end())
        {
            i1++;
            contor++;
        }
        key = *i1;
        j = i - 1;
        if (ascendent == false)
        {
            contor = 0;
            while (contor < j && j1 != a.end())
            {
                j1++;
                contor++;
            }

            while (j >= 0 && *j1 < key)
            {
                *j1 = j + 1;
                j--;
            }
        }
        else
        {
            while (j >= 0 && *j1 > key)
            {
                *j1 = j + 1;
                j--;
            }

            contor = 0;
            while (contor < key && key1 != a.end())
            {
                key1++;
                contor++;
            }
            *key1 = j + 1;
        }
    }
}