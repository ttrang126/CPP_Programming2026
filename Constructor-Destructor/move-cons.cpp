#include <iostream>

using namespace std;

class MoveCons
{
    private:
        int *data;
    public:
        MoveCons(int d)
        {
            data = new int(d);

            cout << "Constructor is called for " << d << endl;
        }
        
        //Copy constructor to delegated
        //Copy constructor
        MoveCons(const MoveCons& source)
        {
            data = new int(*source.data);
            cout << "Deep Copy: Allocated new memory and copied value: " << data << " and " << *data << endl;
        }

        //Move constructor
        MoveCons(MoveCons &&source)
        {
            data = source.data;
            source.data = nullptr;
            cout << "Move Constructor - Memory: " << data << " - Value: " << *data << endl;
        }

        ~MoveCons()
        {
            if (data != nullptr)
            {
                //If the pointer is not pointing to nullptr
                cout << "Destructor called for " << *data << endl;
            }
            else
            {
                //If the pointer if pointing to nullptr
                cout << "Destructor called for nullptr" << endl;
            }

            delete data;
        }

        void Display()
        {
            if(data)
            {
                cout << "Value: " << *data << endl;
                cout << "Address: " << data << endl;
            }
            else
            {
                cout << "No data" << data << endl;
            }
        }
};

int main()
{
    MoveCons obj1(90);
    obj1.Display();
    // MoveCons obj2 = obj1;
    // obj2.Display();
    MoveCons obj3 = move(obj1);
    obj3.Display();

    return 0;
}