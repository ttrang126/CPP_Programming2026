//Member methods of the local class can only access static and enum variables of the enclosing function
//Non-static variables of the enclosing function are not accessible inside local classes
#include <iostream>

using namespace std;

void func()
{
    static int x;
    enum {i = 1, j = 2};

    //int y;

    class Test
    {
        public:
            void method()
            {
                cout << "x = " << x << endl;
                cout << "i = " << i << endl;
                //cout << "y = " << y << endl;        //Error
            }
    };

    Test t;
    t.method();
}

int main()
{
    func();

    return 0;
}