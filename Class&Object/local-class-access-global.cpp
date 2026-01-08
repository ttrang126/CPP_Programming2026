//Local classes can access global types, variables and functions.
//Local classes can access other local classes of the same functions.
#include <iostream>

using namespace std;

int x = 5;

void func()
{
    class Test1
    {
        public:
            Test1()
            {
                cout << "Test1::Test1() called" << endl;
            }
    };

    class Test2
    {
        public:
            Test1 t1;
            void method2()   
            {
                cout << "x = " << x << endl;
            }             
    };

    Test2 t2;
    t2.method2();
}

int main()
{
    func();

    return 0;
}