#include<iostream>
#include "mystring.h"

using namespace std;

int main()
{
    Mystring a("Hello");        //Overloaded constructor
    a = Mystring("Hola");       //Overloaded constructor then move assignment
    a = "Guten Tag";            //Overloaded constructor then move assignment

    Mystring b;
    b = a;                      //Copy assignment
    b = "test";                 //Overloaded constructor then move assignment

    Mystring c(b);              //Copy constructor
    Mystring d = move(c);       //Move constructor

    Mystring empty;
    Mystring larry("Larry");    //Overloaded constructor then move assignment
    Mystring stooge(larry);     //Copy constructor

    empty = stooge;             //Copy assignment
    empty.Display();

    empty = "Funny";            //Move assignment    
    larry.Display();
    stooge.Display();
    empty.Display();

    return 0;
}