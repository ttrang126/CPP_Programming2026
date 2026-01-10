#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        string name;
        int age;
        int id;

    public:
        Student();
        void Display();
};

Student::Student()
{
    cout << "Enter Student name: ";
    getline(cin, name);

    cout << "Enter Student age: ";
    cin >> age;

    cout << "Enter Student ID: ";
    cin >> id;
}

void Student::Display()
        {
            cout << name << endl;
            cout << age << endl;
            cout << id << endl;
        }

int main()
{
    Student s;
    s.Display();

    return 0;
}