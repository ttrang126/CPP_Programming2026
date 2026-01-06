#include <iostream>

using namespace std;

int main()
{
    double val1 = 9.5;
    double &ref = val1;       //ref represent value

    cout << "================" << endl;
    cout << "Value 1: " << val1 << endl;
    cout << "Reference: " << ref << endl;

    double *p1 = &val1, *p2 = &ref;
    cout << "Address of val1: " << p1 << endl;
    cout << "Address of ref: " << p2 << endl;
    
    ref = 5.0;
    double val2 = 8;
    cout << "================" << endl;
    cout << "Value 1: " << val1 << endl;
    cout << "Reference: " << ref << endl;
    cout << "Value 2: " << val2 << endl;

    ref = val2;
    cout << "================" << endl;
    cout << "Value 1: " << val1 << endl;
    cout << "Reference: " << ref << endl;
    cout << "Value 2: " << val2 << endl;

    ref = 6.3;
    cout << "================" << endl;
    cout << "Value 1: " << val1 << endl;
    cout << "Reference: " << ref << endl;
    cout << "Value 2: " << val2 << endl;
}
