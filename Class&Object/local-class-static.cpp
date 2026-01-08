//A local class cannot contain static data members. It may contain static functions
#include <iostream>

using namespace std;

void func()
{
    class Test
    {
        public:
            //static int i;                     //Error
            static void method()
            {
                cout << "Local Class method() called" << endl;
            }
    };

    Test::method();
}

int main()
{
    func();

    return 0;
}