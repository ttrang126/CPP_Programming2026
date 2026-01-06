#include <iostream>

using namespace std;

int main()
{
    int a = 60;
    int b = 45;

    const int *const ptr = &a;
    
    cout << "The value of a: " << a << endl;
    cout << "The address of a: " << ptr << endl;

    //*ptr = 20;        Error   
    //ptr = &b;         Error
}