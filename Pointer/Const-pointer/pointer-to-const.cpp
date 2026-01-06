#include <iostream>

using namespace std;

int main()
{
    int a = 90;
    int b = 50;
    const int *ptr = &a;

    cout << "The value of a: " << a << endl;
    cout << "The address of a: " << ptr << endl;

    //*ptr = 20;        Error the value pointed by the pointer cannot be changed
    
    ptr = &b;
    cout << "The value of b: " << b << endl;
    cout << "The address of b: " << ptr << endl;

    return 0;
}