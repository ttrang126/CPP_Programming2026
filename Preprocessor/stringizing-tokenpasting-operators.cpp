#include <iostream>

using namespace std;

#define stringer(s) #s
#define merge(a, b) a ## b

int main ()
{
    cout << "=======Stringizing Operators (#)=======" << endl;
    cout << stringer(Hello) << endl;

    cout << "=======Token-Pasting Operators (##)=======" << endl;
    int xy = 30;
    cout << merge(x, y) << endl;
    return 0;
}