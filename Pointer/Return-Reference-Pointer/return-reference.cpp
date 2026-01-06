#include <iostream>

using namespace std;

int& returnValue(int &num)
{
    cout << "The value of num is: " << num << endl;
    cout << "The address of num is: " << &num << endl;

    return num;
}

int& returnValueStatic()
{
    static int numStatic = 5;

    return numStatic;
}

int main()
{
    int a = 20;
    int &b = returnValue(a);                            //b is alias of a

    cout << "The value of a is " << a << endl;
    cout << "The address of a is " << &a << endl;

    cout << "The value of b is " << b << endl;
    cout << "The address of b is " << &b  << endl;       //a and b has the address  

    returnValue(a) = 10;                                 
    cout << "The value of a is " << a << endl;
    cout << "The address of a is " << &a << endl;

    int &c = returnValueStatic();                       //c is alias of numStatic

    cout << "The value of c is " << c << endl;          
    cout << "The address of c is " << &c << endl;

    c = 100;
    cout << returnValueStatic() << endl;                //c change --> numStatic change

    return 0;
}