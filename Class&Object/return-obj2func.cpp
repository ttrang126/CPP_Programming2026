#include <iostream>

using namespace std;

class Example
{
    public:
        int a;

        //This function will take object as arguments and return object
        Example add(Example Ea, Example Eb)
        {
            Example Ec;
            Ec.a = Ea.a + Eb.a;

            return Ec;
        }
};

int main()
{
    Example E1, E2, E3;

    E1.a = 10;
    E2.a = 100;
    E3.a = 0;

    cout << "===============Initial values===============" << endl;
    cout << "Value of Object 1: " << E1.a << endl;
    cout << "Value of Object 2: " << E2.a << endl;
    cout << "Value of Object 3: " << E3.a << endl;

    //Passing object as an argument to func add()
    E3 = E3.add(E1, E2);
    
    cout << "===============New values===============" << endl;
    cout << "Value of Object 1: " << E1.a << endl;
    cout << "Value of Object 2: " << E2.a << endl;
    cout << "Value of Object 3: " << E3.a << endl;

    return 0;
}