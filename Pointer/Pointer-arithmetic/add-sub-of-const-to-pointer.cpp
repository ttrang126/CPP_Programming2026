#include <iostream>

using namespace std;

int main()
{
    int a = 45;
    int *ptr = &a;
    cout << "Address of a (Init): " << ptr << endl;

    ptr = ptr + 5;
    cout << "Address of a (After add): " << ptr << endl; //Address of a + (5 * sizeof(datatype))

    ptr = ptr - 5;
    cout << "Address of a (After subtract): " << ptr << endl;   //Address of a - (5 * sizeof(datatype))

    return 0;
}