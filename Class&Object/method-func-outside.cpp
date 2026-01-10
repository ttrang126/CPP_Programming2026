#include <iostream>

using namespace std;

class Base {
    public:
        void myMethod();
};

void Base::myMethod()
{
    cout << "Hello world" << endl;
}

int main()
{
    Base obj;
    obj.myMethod();

    return 0;
}