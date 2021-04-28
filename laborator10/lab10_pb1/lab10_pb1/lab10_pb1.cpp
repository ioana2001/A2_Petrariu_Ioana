#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*1. Create a std::vector of string elements. Sort that vector using a lambda expression that compares two 
strings based on their length first and then lexicographical.*/

int main()
{
    vector<string> s = { "fasfa", "aaf", "fajauhfahfahj", "bad", "fahbf" };

    auto compare = [](const string s1, const string s2) {
        if (s1.length() > s2.length())
            return 1;
        if (s1.length() < s2.length())
            return -1;
        if (s1 > s2)
            return 1;
        if (s1 < s2)
            return -1;
        return 0;
    };

    for (int i = 0; i < s.size() - 1; i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (compare(s[i], s[j]) == 1)
                swap(s[i], s[j]);
        }
    }

    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << "\n";
    }

    return 0;
}