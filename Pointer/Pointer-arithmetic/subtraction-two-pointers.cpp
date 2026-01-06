#include <iostream>

using namespace std;

int main()
{
    int num = 23;
    int *ptr1 = &num;

    int *ptr2 = ptr1 + 5;
    
    cout << "ptr1: " << ptr1 << endl;
    cout << "ptr2: " << ptr2 << endl;

    int sub = ptr2 - ptr1;
    cout << "ptr2 - ptr1 = " << sub << endl;

    return 0;
}