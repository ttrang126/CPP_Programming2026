#include<iostream>

using namespace std;

class Student
{
    public:
        string studenName;

    void printName()
    {
        cout << studenName << endl;
    }
};

int main()
{
    Student s1;
    s1.studenName = "Phineas Flynn";

    s1.printName();

    return 0;
}