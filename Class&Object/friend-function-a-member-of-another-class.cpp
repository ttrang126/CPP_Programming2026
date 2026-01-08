#include <iostream>

using  namespace std;

#define PI 3.14

class Base1;

class Base2
{
    public:
        void Display(Base1);
};

class Base1
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

    friend void Base2::Display(Base1);
};

void Base2::Display(Base1 t)
{
    cout << "Circumference: " << t.circumference << endl;
    cout << "Area: " << t.area << endl;
}

int main()
{
    Base1 b1;
    Base2 b2;

    b1.Circle(2.5);
    b2.Display(b1);

    return 0;
}
