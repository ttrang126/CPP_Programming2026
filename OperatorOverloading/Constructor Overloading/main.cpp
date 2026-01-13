#include<iostream>
#include "mystring.h"

using namespace std;

int main()
{
    Mystring empty;
    Mystring larry("Larry");        //Overloaded Constructor
    Mystring stooge = larry;         //Copy Constructor

    empty.Display();
    larry.Display();
    stooge.Display();

    return 0;
}