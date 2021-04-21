#include <iostream>
#include <stdio.h>

using namespace std;

template<typename K, typename V>
class Map {
public:
    int Nr = -1;
    int poz = -1;
    K key = 0;
    struct Elem {
        K Key;
        V Value;
        int Index;
    }d[100];

    Map()
    {
        for (int i = 0; i < 100; i++) {
            d[i].Index = 0;
            d[i].Key = 0;
            d[i].Value = 0;
        }
    }

    Elem* begin() {
        d[0].Index = 0;
        return &d[0];
    }
    Elem* end() {
        d[Nr + 1].Index = Nr + 1;
        return &d[Nr + 1];
    }

    Map& operator[] (int key1) 
    {
        poz = -1;
        key = key1;

        for (int i = 0; i < Nr; i++)
        {
            if (d[i].Key == key1)
            {
                poz = i;
                break;
            }
        }

        return *this;
    }
    Map& operator= (V s) {
        
        if (poz != -1)
        {
            d[poz].Value = s;
        }
        else 
        {
            Nr++;
            d[Nr].Key = key;
            d[Nr].Value = s;
            d[Nr].Index = Nr;
        }
        return *this;
    }

    int Count() {
        return Nr + 1;
    }
    void Clear() {
        for (int i = 0; i < 100; i++) {
            d[i].Index = 0;
            d[i].Key = 0;
            d[i].Value = 0;
        }
    }
    bool Get(const K& key,const V& value)
    {
        poz = -1;
        for (int i = 0; i < Nr; i++)
        {
            if (d[i].Key == key)
            {
                poz = i;
                break;
            }
        }
        if (poz == -1)
            return false;
        d[poz].Value = value;
        return true;
    }
    bool Includes(const Map<K, V>& map) 
    {
        for (int i = 0; i <= Nr; i++)
        {
            int ok = 0;
            for (int j = 0; j <= map.Nr; j++)
                if (d[i].Key == map.d[j].Key)
                    ok = 1;
            if (ok == 0)
                return 0;
        }
        return 1;
    }
    bool Delete(const K& key)
    {
        poz = -1;
        for (int i = 0; i < Nr; i++)
        {
            if (d[i].Key == key)
            {
                poz = i;
                break;
            }
        }
        if (poz == -1)
            return false;
        cout << poz << endl;
        Nr--;
        for (int i = poz; i <= Nr; i++)
        {
            d[i].Key = d[i + 1].Key;
            d[i].Value = d[i + 1].Value;
            //d[i].Index = d[i + 1].Index;
            //d[i].Index--;
        }
    }
};

int main()
{
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";

    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    return 0;
}