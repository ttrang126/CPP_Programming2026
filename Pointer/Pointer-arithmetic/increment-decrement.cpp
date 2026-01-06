#include <iostream>

using namespace std;

int main()
{
    int a = 46;
    int *ptr1 = &a;

    cout << "Size of a: " << sizeof(int) << endl;
    
    cout << "Address of a: " << ptr1 << endl;
    ptr1++;
    cout << "Address of a (After incrementing): " << ptr1 << endl;      //Address of a + sizeof(datatype)
    ptr1--;
    cout << "Address of a (After decrementing): " << ptr1 << endl;

    double b = 10.34;
    double *ptr2 = &b;

    cout << "Size of b: " << sizeof(double) << endl;
    
    cout << "Address of b: " << ptr2 << endl;
    ptr2++;
    cout << "Address of b (After incrementing): " << ptr2 << endl;
    ptr2--;
    cout << "Address of b (After decrementing): " << ptr2 << endl;

    char c = 't';
    char *ptr3 = &c;

    cout << "Size of c: " << sizeof(char) << endl;
    
    cout << "Address of a: " << static_cast<void*> (ptr3) << endl;
    ptr3++;
    cout << "Address of a (After incrementing): " << static_cast<void*> (ptr3) << endl;
    ptr3--;
    cout << "Address of a (After decrementing): " << static_cast<void*> (ptr3) << endl;
}