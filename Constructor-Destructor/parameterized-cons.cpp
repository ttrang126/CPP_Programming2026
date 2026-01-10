#include <iostream>

using namespace std;

class Point
{
    private:
        int x;
        int y;
    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }

        int getX() {return x;}
        int getY() {return y;}
};

int main()
{
    Point p(3, 10);

    cout << "x = " << p.getX() << "; y = " << p.getY() << endl;

    return 0;
}