#include <iostream>

using namespace std;

void func(int *x, int *y)
{
    *x = 30; 
    *y = 40;

    cout << "x = " << *x << " y = " << *y << endl;
}

int main()
{
    int x = 46;
    int y = 90;

    func(&x, &y);
    cout << "x = " << x << " y = " << y << endl;
    
    return 0;
}