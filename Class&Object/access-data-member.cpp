#include <iostream>

using namespace std;

class Parent
{   
    private:
        int years;
    public:
        string name;

        Parent()
        {
            name = "";
            years = 0;
        }

        void setAge(int age)
        {
            years = age;
        }

        int getAge()
        {
            return years;
        }

    protected:
        int protected_id;
};

class Child : public Parent 
{
    public:
        Child()
        {
            protected_id = 0;
        }

        void setID(int id)
        {
            protected_id = id;
        }
        
        int getID()
        {
            return protected_id;
        }
};

int main()
{
    Parent obj;
    Child obj1;

    obj.name = "Will";
    obj.setAge(23);
    
    cout << "Name: " << obj.name << endl;
    cout << "Age: " << obj.getAge() << endl;

    obj1.name = "Max";
    obj1.setAge(30);
    obj1.setID(2);

    cout << "Name: " << obj1.name << endl;
    cout << "Age: " << obj1.getAge() << endl;
    cout << "ID: " << obj1.getID() << endl;
              
    return 0;
}