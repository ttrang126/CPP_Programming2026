#include <iostream>

using namespace std;

typedef int AnalogValue;
typedef AnalogValue AnalogModule[8];

int main()
{
    AnalogValue val1 = 3000;
    AnalogModule temp1 = {0, 1, 2, 3, 4, 5, 6, 7};
    
    cout << "AnalogValue val1 = " << val1 << endl;

    for(int i = 0; i < 8; i++)
    {
        cout << "AnalogModule temp1[" << i << "] = " << temp1[i] << endl;
    }

    return 0;
}