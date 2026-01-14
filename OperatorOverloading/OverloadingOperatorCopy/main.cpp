#include<iostream>
#include "mystring.h"

using namespace std;

int main()
{
    Mystring a("hello");
    Mystring b;

    b = a;                          //Copy assignment
    b.Display();

    b = "This is a test";           //Copy assignment
    b.Display();

    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge = larry;        //Copy constructor
    Mystring stooges;

    empty = stooge;                 //Copy assignment

    empty.Display();
    larry.Display();
    stooge.Display();
    
    stooges = "Larry, Moe and Curly";
    stooges.Display();

    return 0;
}