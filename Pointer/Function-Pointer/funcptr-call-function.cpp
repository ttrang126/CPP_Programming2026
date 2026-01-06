#include <iostream>

using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 15, b = 3;

    int (*funcMul)(int, int);
    funcMul = multiply;                 

    int resultMul = funcMul(a, b);      //call the function multiply through function pointer funcMul
    cout << "The value of the Product is: " << resultMul << endl;
    cout << "The address of the Product is: " << (void*) funcMul << endl;

    int (*funcSum) (int, int);
    funcSum = sum;

    int resultSum = funcSum(a, b);
    cout << "The value of the Sum is: " << resultSum << endl;
    cout << "The address of the Sum is: " << (void*) funcSum << endl;

    return 0;
}