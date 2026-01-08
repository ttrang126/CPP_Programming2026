//A local class type name can only be used in the enclosing function
//Local class can only be used locally, inside the function and not outside it
//All the method of a local class must be defined inside it only
#include<iostream>

using namespace std;

void func()
{
    class Test
    {
        public:
            void method()
            {
                cout << "Local Class method() called" << endl;
            }
    };

    Test t;
    t.method();

    /*
    Error as the method is defined outside the local class
    void Test::method() 
    {
        cout << "Local Class method() callled" << endl;
    }
    */
}

int main()
{
    func();

    /*
    Test t;     //Error
    */

    return 0;
}