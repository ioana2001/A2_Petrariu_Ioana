#pragma once

class Number
{
    // add data members
    char* nr;
    int b;
public:
    Number(const char* value, int base); // where base is between 2 and 16
    ~Number();
    // add operators and copy/move constructor
    void SwitchBase(int newBase);
    void Print();
    int  GetDigitsCount(); // returns the number of digits for the current number
    int  GetBase(); // returns the current base
    void strev(char* str);
    char reVal(int num);
    int val(char c);

    int StringToNumber();

    friend int operator+ (Number& n1, Number& n2);

    Number& operator=(Number& c);

    bool operator==(Number& c);
    bool operator<(Number& c);
    bool operator>(Number& c);
    bool operator<=(Number& c);
    bool operator>=(Number& c);

};