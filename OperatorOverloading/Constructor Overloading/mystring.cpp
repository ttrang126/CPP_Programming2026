#include<iostream>
#include<cstring>
#include "mystring.h"

using namespace std;

Mystring::Mystring() : str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

//Overload Constructor
Mystring::Mystring(const char* s) : str{nullptr}
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

//Copy constructor
Mystring::Mystring(const Mystring& source) : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

Mystring::~Mystring()
{
    delete[] str;
}

void Mystring::Display() const
{
    cout << str << " : " << getLength() << endl;
}

int Mystring::getLength() const
{
    return strlen(str);
}

const char *Mystring::getStr() const
{
    return str;
}