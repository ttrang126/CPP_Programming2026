#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int* p = &i;		// p has the address of i

    cout << "Value of i: " << i << endl;
    cout << "Value of p: " << p << endl;
    cout << "Address of i: " << &i << endl;
    cout << "==============" << endl;

    *p = 2;			    // i = 2
    cout << "Value of i: " << i << endl;
    cout << "Value of p: " << p << endl;
    cout << "Address of i: " << &i << endl;
    cout << "==============" << endl;

    int j;
    p = &j;			    // now p has the address of j
    *p = 3;			    // j = 3, i remains 2
    cout << "Value of i: " << i << endl;
    cout << "Value of j: " << j << endl;
    cout << "Value of p: " << p << endl;
    cout << "Address of i: " << &i << endl;
    cout << "Addrees of j: " << &j << endl;

    return 0;
}

