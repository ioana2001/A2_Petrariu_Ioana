#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>  
#include <queue>
#include <math.h>

using namespace std;

class Element {
public:
    string Word;
    int Occ;
    Element(string word, int occ)
    {
        Word = word;
        Occ = occ;
    }
};

bool compareStrings(string s1, string s2) {
    int compare = s1.compare(s2);
    if (compare > 0)   //  s1>s2
        return 1;
    else if (compare < 0)   //  s1<s2
        return 0;
}

class Compare {
public:
    bool operator () (Element a, Element b)
    {
        if(a.Occ != b.Occ)
            return a.Occ < b.Occ;
       // return a.Word < b.Word;
        return compareStrings(a.Word, b.Word);
    }
};

int main()
{
    ifstream file;
    string s;
    string filename = "TextFile.txt";
    string delimiter = ". ,!?";
    file.open(filename);

    getline(file, s);

    string token;
    size_t pos = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!' || s[i] == ',')
            s[i] = ' ';
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }

    istringstream iss(s);
    map<string, int> m;
    priority_queue<Element, vector<Element>, Compare> q;

    for (string s; iss >> s;)
    {
        m[s]++;
    }

    map<string, int>::iterator it;
    
    for (it = m.begin(); it != m.end(); it++)
    {
        Element e(it->first, it->second);
        q.push(e);
        //cout << it->first << " " << it->second << endl;
    }

    while (q.empty() == false)
    {
        cout << q.top().Word << " " << q.top().Occ << endl;
        q.pop();
    }

    file.close();
    return 0;
}