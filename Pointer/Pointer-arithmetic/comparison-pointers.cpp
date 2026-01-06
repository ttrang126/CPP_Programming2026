#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int *ptr1 = &num;           
    int **ptr2 = &ptr1;         
    int *ptr3 = *ptr2;

    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;
    cout << "ptr3: " << ptr3 << endl;

    if(ptr1 == ptr3)
    {
        cout << "ptr1 and ptr3 point to the same memory" << endl;
    }
    else
    {
        cout << "ptr1 points to: " << ptr1 << endl;
        cout << "ptr3 points to: " << ptr3 << endl;
    }

    return 0;
}