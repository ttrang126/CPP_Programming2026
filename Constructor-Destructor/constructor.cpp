#include <iostream>

using namespace std;

class Base
{
    public:
        Base()
        {
            cout << "Hello world" << endl;
        }
};

int main()
{
    Base obj;

    return 0;
}