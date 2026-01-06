#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int num = 30;

    double doubleNum = static_cast<double> (num);

    //printing data type
    cout << typeid(num).name() << endl;

    //typecasting
    cout << typeid(static_cast<double>(num)).name() << endl;

    //printing double type 
    cout << typeid(doubleNum).name() << endl;

    return 0;

}