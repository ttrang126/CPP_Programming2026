#include <iostream>
#include <cstring>
#include "mystring.h"

using namespace std;

Mystring::Mystring() : str{nullptr}
{
    str = new char[1];
    *str = '\0';

    cout << "[Default constructor]"
         << " this=" << this
         << " str=" << static_cast<void*>(str)
         << " value=\"\""
         << endl;
}

//Overloaded constructor
Mystring::Mystring(const char* s) : str{nullptr}
{
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }

    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    cout << "[Overloaded constructor]"
         << " this=" << this
         << " str=" << static_cast<void*>(str)
         << " value=\"" << (str ? str : "null") << "\""
         << endl;
}

//Copy constructor
Mystring::Mystring(const Mystring& source) : str{nullptr}
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
    cout << "[Copy constructor] " 
         << "this=" << this
         << " from=" << &source
         << " this.str=" << static_cast<void*>(str)
         << " from.str=" << static_cast<void*>(source.str)
         << " value=\"" << str << "\""
         << endl;
}

//Move constructor
Mystring::Mystring(Mystring&& source) : str{source.str}
{
    cout << "[Move Constructor] " 
         << "this=" << this
         << " from=" << &source
         << " taken.str=" << static_cast<void*>(source.str)
         << endl;

    source.str = nullptr;
}

//Destructor
Mystring::~Mystring()
{
    cout << "[Destructor] this=" << this
         << " str_ptr=" << static_cast<void*>(str)
         << " value: " << (str ? str : "nullptr")
         << endl;

    delete[] str;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring& rhs)
{
    cout << "[Copy assignment]" 
         << " this=" << this
         << " rhs=" << &rhs
         << " this.str(before)=" << static_cast<void*>(str)
         << " rhs.str=" << static_cast<void*>(rhs.str)
         << " value=\"" << rhs.str << "\""
         << endl;

    if(this == &rhs)
    {
        return *this;
    }
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);

    cout << "             "
         << " this.str(after)=" << static_cast<void*>(str)
         << endl;

    return *this;
}

//Move assignment
Mystring &Mystring::operator=(Mystring&& rhs)
{
    cout << "[Move assignment]"
         << " this=" << this
         << " rhs=" << &rhs
         << " this.str(before)=" << static_cast<void*>(str)
         << " rhs.str(before)=" << static_cast<void*>(rhs.str)
         << endl;

    if(this == &rhs)
    {
        return *this;
    }
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;

    cout << "           "
         << " this.str(after)=" << static_cast<void*>(str)  
         << " rhs.str(after)=" << static_cast<void*>(rhs.str)
         << endl;

    return *this;
}

void Mystring::Display() const
{
    cout << str << " : " << getLength() << endl;
}

int Mystring::getLength() const
{
    return strlen(str);
}

const char* Mystring::getStr() const
{
    return str;
}