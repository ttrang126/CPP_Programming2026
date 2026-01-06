#include <iostream>

using namespace std;

//Function
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{   
    cout << "========Function========" << endl;
    
    int a = 10, b = 20;
    int m = max(a, b);

    cout << "Max is " << m << endl;

    return 0;
}


