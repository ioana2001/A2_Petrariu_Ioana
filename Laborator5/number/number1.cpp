#include <iostream>
#define _CRT_SECURE_NO_WARNING
#include "number.h"

using namespace std;

int operator+(Number& n1, Number& n2)
{
    n1.SwitchBase(10);
    n2.SwitchBase(10);
    int numar1 = n1.StringToNumber();
    int numar2 = n2.StringToNumber();
    return numar1 + numar2;
}

int Number::StringToNumber()
{
    int n = strlen(nr);
    int numar = 0;
    for (int i = 0; i < n; i++)
    {
        numar = numar * 10;
        numar = numar + nr[i] - '0';
    }
    return numar;
}

bool Number::operator==(Number& c)
{
    if (c.b > this->b)
        this->SwitchBase(c.b);
    else if (c.b < this->b)
        c.SwitchBase(this->b);

    if (strcmp(c.nr, this->nr) == 0)
        return 1;
    return 0;
}
bool Number::operator<(Number& c)
{
    if (c.b > this->b)
        this->SwitchBase(c.b);
    else if (c.b < this->b)
        c.SwitchBase(this->b);

    if (strcmp(c.nr, this->nr) < 0)
        return 0;
    return 1;
}
bool Number::operator<=(Number& c)
{
    if (c.b > this->b)
        this->SwitchBase(c.b);
    else if (c.b < this->b)
        c.SwitchBase(this->b);

    if (strcmp(c.nr, this->nr) == 0)
        return 1;
    if (strcmp(c.nr, this->nr) <= 0)
        return 0;
    return 1;
}
bool Number::operator>(Number& c)
{
    if (c.b > this->b)
        this->SwitchBase(c.b);
    else if (c.b < this->b)
        c.SwitchBase(this->b);

    if (strcmp(c.nr, this->nr) < 0)
        return 1;
    return 0;
}
bool Number::operator>=(Number& c)
{
    if (c.b > this->b)
        this->SwitchBase(c.b);
    else if (c.b < this->b)
        c.SwitchBase(this->b);

    if (strcmp(c.nr, this->nr) == 0)
        return 1;
    if (strcmp(c.nr, this->nr) <= 0)
        return 1;
    return 0;
}

Number::Number(const char* value, int base)
{
    b = base;
    int size = strlen(value);
    nr = new char[size + 1];
    strcpy_s(nr, size + 1, value);
}
Number::~Number()
{
    delete nr;
    nr = nullptr;
}
void Number::Print()
{
    cout << nr << endl;
}
int Number::GetDigitsCount()
{
    return strlen(nr);
}
int Number::GetBase()
{
    return b;
}
void Number::SwitchBase(int newBase)
{
    char res[10];
    int len = strlen(nr);
    int power = 1;
    int num = 0;
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        if (val(nr[i]) >= b)
        {
            cout << "Invalid Number";
        }

        num += val(nr[i]) * power;
        power = power * b;
    }
    int index = 0;
    while (num > 0)
    {
        res[index++] = reVal(num % newBase);
        num /= newBase;
    }
    res[index] = '\0';
    strev(res);
    strcpy_s(nr, strlen(nr) + 1, res);
    b = newBase;
}
void Number::strev(char* str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
int Number::val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
char Number::reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}