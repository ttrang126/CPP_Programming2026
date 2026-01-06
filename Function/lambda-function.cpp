#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    auto l1 = []() {cout << "Hello world" << endl;};            //Stateless lambda Expression
    auto l2 = [](int x) {cout << "The value of x is: " << x << endl;};
    auto l3 = [](int x, int y) {
        cout << "Sum of the two value: " << x + y << endl;
    };

    auto l4 = [b]() {cout << "The value of b - l4: " << b << endl;};      //Stateful lambda Expression
    auto l5 = [b] () mutable
    {
        b = 100;
        cout << "The value of b - l5: " << b << endl;
    };
    auto l6 = [&] ()
    {
        b += 200;
        cout << "The value of b - l6: " << b << endl;
    };

    l1();
    l2(100);
    l3(10, 20);
    l4();
    l5();
    cout << "The value of b after - l5: " << b << endl;
    l6();
    cout << "The value of b after - l6: " << b << endl;

    return 0;
}