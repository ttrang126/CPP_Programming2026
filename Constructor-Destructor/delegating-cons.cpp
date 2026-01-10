#include <iostream>

using namespace std;

class MyClass
{
private:
    int x, y, z;

public:
    MyClass() : MyClass(0, 0, 0) {}

    MyClass(int y) : MyClass(0, y, 0) {}

    MyClass(int x, int z) : MyClass(x, 0, z) {}

    MyClass(int x, int y, int z) : x(x), y(y), z(z)
    {
        cout << "x = " << this->x << endl;
        cout << "y = " << this->y << endl;
        cout << "z = " << this->z << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    MyClass obj1;
    MyClass obj2(5);
    MyClass obj3(2, 9);
    MyClass obj4(6, 8, 10);

    return 0;
}