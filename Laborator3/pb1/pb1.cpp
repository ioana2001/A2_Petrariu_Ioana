#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    Math x;
    cout << x.Add(10, 20) << endl;
    cout << x.Add(10, 20, 30) << endl;
    cout << x.Add(10.34, 20.16) << endl;
    cout << x.Add(10.34, 20.16, 30.14) << endl;

    cout << x.Add(4, 10, 20, 30, 40) << endl;

    cout << x.Mul(10, 20) << endl;
    cout << x.Mul(10, 20, 30) << endl;
    cout << x.Mul(10.34, 20.16) << endl;
    cout << x.Mul(10.34, 20.16, 30.14) << endl;

    cout << x.Add(10, 10.1) << endl;

    cout << x.Add("ab", "c");
    return 0;
}
