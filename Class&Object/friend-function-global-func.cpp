#include <iostream>

using namespace std;

#define PI 3.14

class Base
{
    private:
        float radius;
        float circumference;
        float area;

    public:
        void Circle(float val)
        {
            radius = val;
            circumference = 2*PI*radius;
            area  = PI*radius*radius;
        }
    friend void Display(Base);
};

void Display(Base t)
{
    cout << "Circumference: " << t.circumference << endl;
    cout << "Area: " << t.area << endl;
}

int main()
{
    Base b;
    b.Circle(2.5);

    Display(b);

    return 0;
}