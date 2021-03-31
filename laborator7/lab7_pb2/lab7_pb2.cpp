#include <iostream>

using namespace std;

template <class T>
class vectort
{
    T a[100];
    int n;
public:
    typedef int(*cmp)(T l, T r);

    vectort() : n(0) {}
    void push(T x){
        n++;
        a[n] = x;
    }
    T pop() {
        return a[n];
    }
    void deleteElem(T index)
    {
        int i;
        for (i = index + 1; i <= n; i++)
        {
            a[i - 1] = a[i];
        }
        n--;
    }
    void insertElem(int index, T value) {
        int i;
        n++;
        for (int i = n; i > index; i--)
        {
            a[i] = a[i - 1];
        }
        a[index] = value;
    }
    T get(int index)
    {
        return a[index];
    }
    int count()
    {
        return n;
    }


    /*
    void sort(cmp nume_cmp, T a, T b)
    {
        if (cmp == nullptr)
        {
            bool sorted;
            do {
                sorted = true;
                for(int i=0;i<n-1;i++)
                    if (a[i] < a[i + 1])
                    {
                        swap(a[i], a[i + 1]);
                        sorted = false;
                    }
            } while (!sorted);
        }
    }*/
};

int cmp_int(int a, int b);

int main()
{
    vectort<int> v;
    v.push(5);
    v.push(3);
    v.push(10);
    v.push(13);
    v.deleteElem(1);
    cout << v.pop() << endl;
    cout << v.get(2) << endl;
    cout << v.count() << endl;
    return 0;
}

int cmp_int(int a, int b)
{
    if (a == b) return 0;
    return a < b ? -1 : 1;
}