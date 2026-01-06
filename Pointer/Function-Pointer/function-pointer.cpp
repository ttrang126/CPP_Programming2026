#include <iostream>

using namespace std;

int func(int a, int b)
{
    return a * b;
}

int main()
{
    //Function pointer
    int (*ptfunc)(int, int);           //declare function pointer that can point to a function taking two int parameters and returning an int
    ptfunc = func;                     //ptfunc is pointing to func
    cout << "Address of function: " << (void*) ptfunc << endl;
    cout << "Address of function (Same as above): " << (void*) func << endl;
    cout << "Value of function: " << ptfunc(2, 3) << endl;

    return 0;
}