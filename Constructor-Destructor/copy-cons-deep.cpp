#include <iostream>

using namespace std;

class Sample
{
    private:
        int *var;
    
    public:
        Sample(int x)
        {
            var = new int(x);
            cout << "Constructor: Allocated memory and set value to " << *var << endl;
        }

        //Deep Copy
        //Allocates new memory for "var" in the new object and copied the value from the original object. This ensures that "obj1" and "obj2" have their own separate memory spaces
        Sample(const Sample& other)
        {
            var = new int(*other.var);      //Deep copy
            cout << "Deep Copy Constructor: Allocated new memory and copied value: " << var << " and " << *var << endl; 
        }

        ~Sample()
        {
            delete var;
            cout << "Destructor: Memory deallocated." << endl;
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

    Sample obj2 = obj1;
    obj2.Display();

    return 0;
}