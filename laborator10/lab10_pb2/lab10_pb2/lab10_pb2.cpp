#include <iostream>
#include <list>
#include <iterator> 

using namespace std;

/*2. Write a lambda expression that returns the biggest number from a list of integers.*/

int main()
{
    list<int> a = { 3,8,9,12,56,2 };

    auto maxim = [](list<int> x) {
        int max1 = x.front();
        for (auto it : x) {
            if (it > max1)
                max1 = it;
        }
        return max1;
    };

    cout << maxim(a);

    return 0;
}