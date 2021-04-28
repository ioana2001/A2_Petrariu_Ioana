#include <iostream>

using namespace std;

/*3. Create a vector with int values of your own implementation that includes functions like Add and Delete.

Add two methods Iterate and Filter. The first one iterates through all of the elements in the vector and changes each element based on a lambda 
function received as an argument. The second function removes all elements from the vector that are matched by a lambda function received as 
an argument.*/

class MyVector {
    int v[100];
    int Size = 0;
public:
    bool Add(int x) // return true if the value was added. As a result, the size of the vector increases with one.
    {
        if (Size > 99) { return 0; }
        v[Size] = x;
        Size++;
        return 1;
    }
    bool Delete(int index) // returns true if the value from the index was removed. As a result, the size of the vector decreases with one.
    {
        if (index < 0 || index >= Size) { return 0; }
        Size--;
        for (int i = index; i < Size; i++) {
            v[i] = v[i + 1];
        }
        return 1;
    }

    void Print()
    {
        for (int i = 0; i < Size; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    void Iterate(int(*f)(int x)) {
        for (int i = 0; i < Size; i++) {
            v[i] = f(v[i]);
        }
    }

    void Filter(bool(*f)(int x)) {
        for (int i = 0; i < Size; i++) {
            if (f(v[i]) == 1) {
                Delete(i);
                i--;
            }
        }
    }
};

int main()
{
    MyVector v;
    v.Add(3);
    v.Add(12);
    v.Add(9);
    v.Add(5);
    v.Add(6);

    auto f = [](int x) {
        return x * 3;
    };

    auto g = [](int x) {
        if (x % 2 == 0)
            return true;
        return false;
    };

    v.Filter(g);
    v.Print();

    v.Iterate(f);
    v.Print();

    return 0;
}