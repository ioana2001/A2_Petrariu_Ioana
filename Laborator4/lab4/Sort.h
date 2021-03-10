#pragma once
#include <iostream>
#include <list>
#include <stdarg.h>
#include <string.h>
using namespace std;

class Sort
{
    list <int> a;
public:
    Sort(char v[100]);
    Sort();
    Sort(int n, int min1, int max1);
    Sort(int a[100], int n);
    Sort(int count, ...);
   /* void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);*/
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};