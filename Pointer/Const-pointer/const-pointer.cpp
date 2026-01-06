#include <iostream>

using namespace std;

int main()
{
    int a = 123, b = 456;
    int *const ptr = &a;
    cout << "========Before change========" << endl;
    cout << "The value of a: " << a << endl;
    cout << "The address of a: " << ptr << endl;

    *ptr = 56;
    cout << "========After change========" << endl;
    cout << "The value of a: " << a << endl;
    cout << "The address of a: " << ptr << endl;

    //ptr = &b;             Error value of ptr cannot be changed
    
    return 0;
}