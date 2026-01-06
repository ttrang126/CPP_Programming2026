#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int *p;
    p = a;          //p points to a[0]
    *p = 1;         //a[0] = 1
    if(p == &a[0]) 
    {
        cout << "a[0] = " << a[0] << endl;
        cout << "Address of a[0] = " << p << endl;
    }

    ++p;            //now p points to a[1]
    *p = 5;
    if(p == &a[1]) 
    {
        cout << "Init value: a[1] = " << a[1] << endl;
        cout << "Address of a[1] = " << p << endl;
    }

    p++;            //now p points to a[2]
    *p = 3;
    if(p == &a[2]) 
    {
        cout << "Init value: a[2] = " << a[2] << endl;
        cout << "Address of a[2] = " << p << endl;
    }

    p += 2;            //now p points to a[4]
    *p = 9;
    if(p == &a[4]) 
    {
        cout << "Init value: a[4] = " << a[4] << endl;
        cout << "Address of a[4] = " << p << endl;
    }

}