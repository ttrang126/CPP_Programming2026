#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

//function containing two integers and function pointer as parameters
//The function pointer should point to a function that takes two integers and returns an integer
int result(int a, int b, int (*func)(int, int))
{
    return func(a, b);
}

int main()
{
    int a = 10;
    int b = 5;

    int (*ptfunc)(int, int);
    ptfunc = sum;

    int total = result(a, b, ptfunc);                       //Call func with a, b, and the sum function pointer
    cout << "The value of the sum is: " << total << endl;

    return 0;
}