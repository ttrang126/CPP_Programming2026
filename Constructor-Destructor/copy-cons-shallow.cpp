#include <iostream>

using namespace std;

class Sample
{
    private:
        int* var;
    public:
        Sample(int x)
        {
            var = new int(x);
            cout << "Constructor: Allocated memory and set value to: " << *var << endl;

        }

        //Shallow Copy Constructor
        //Copy the pointer var from the "other" object to the new object, so both projects will point to the same memory location
        Sample(const Sample& other)
        {
            var = other.var;        //Shallow copy
            cout << "Shallow Copy Constructor: Copied the pointer (address)" << endl;
        }

        ~Sample()
        {
            delete var;
            cout << "Destructor: Memory deallocated" << endl;
        }

        void Display()
        {
            cout << "Value: " << *var << endl;
            cout << "Address of value: " << var << endl;
        }
};

int main()
{
    Sample obj1(10);
    obj1.Display();

    Sample obj2 = obj1;             //Create a copy of obj1 using the shallow copy constructor
    obj2.Display();

    return 0;
}