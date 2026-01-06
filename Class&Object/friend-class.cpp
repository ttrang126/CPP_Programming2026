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
            area = PI*radius*radius;
        }
    friend class FC;
};

class FC
{
    public:
        void Display(Base b)
        {
            cout << "Circumference: " << b.circumference << endl;
            cout << "Area: " << b.area << endl; 
        }
};

int main()
{
    Base t;
    FC f;

    t.Circle(2.5);
    f.Display(t);

    return 0;
}