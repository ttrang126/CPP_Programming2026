#include <iostream>

using namespace std;

class Example
{
    public:
        int a;
        
        //This function will take an object as an argument
        void add(Example e)
        {
            a = a + e.a;
        }
};

int main()
{
    Example E1, E2;

    E1.a = 50;
    E2.a = 100;

    cout << "===============Initial values===============" << endl;
    cout << "Value of Object 1: " << E1.a << endl;
    cout << "Value of Object 2: " << E2.a << endl;

    //Passing object to function as an argument to func add()
    E2.add(E1);

    cout << "===============New values===============" << endl;
    cout << "Value of Object 1: " << E1.a << endl;
    cout << "Value of Object 2: " << E2.a << endl;
    return 0;
}

