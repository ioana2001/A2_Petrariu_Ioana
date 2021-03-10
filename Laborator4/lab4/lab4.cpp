#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
    Sort s(7, 20, 30);
    s.Print();
    cout << endl << endl;

    int v1[] = { 1,5,2,6 };
    Sort s1(v1, 4);
    s1.Print();
    cout << endl << endl;

    Sort s2(4, 1, 6, 7, 3);
    s2.Print();
    cout << endl << endl;

    char v[100] = "10,45,6,2,20";
    Sort s3(v);
    bool b = false;
    s3.Print();
    cout << endl << endl;

    return 0;
}