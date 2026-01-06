#include <iostream>

using namespace std;

union Value
{
    int x, y;
};

int main()
{
    //Union variable is defined as M
    union Value M;
    M.x = 8;

    cout << "When M.x = 8" << endl;
    cout << "Mx = " << M.x << endl;
    cout << "My = " << M.y << endl;
    
    M.y = 10;
    cout << "When M.y = 10" << endl;
    cout << "Mx = " << M.x << endl;
    cout << "My = " << M.y << endl;

    return 0;   
}

