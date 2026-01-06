#include <iostream>

using namespace std;

void func(int x, int y)
{
    x = 20;
    y = 30;

    cout << "x = " << x << " y = " << y << endl; 
}

int main()
{
    int x = 15;
    int y = 18;
    
    func(x, y);
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}