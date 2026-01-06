#include <iostream>
#include <iomanip>

using namespace std;

struct Time
{
    int hour, minute, second;
};

struct Date
{
    int day, month, year;
};

struct Student
{
    char name[32];
    struct Date birthday;
    int id;
};

int main()
{
    Time classTime = {6, 45, 00};
    Time lunchTime;
    Date studentBirthday = {25, 12, 1995};
    Student studentNameA = {"Phineas Flynn", {23, 9, 2000}, 18};
    lunchTime.minute = 15;
    lunchTime.hour = classTime.hour + 6;
    
    cout << "Class time: "  
         << setw(2) << setfill('0') << classTime.hour << ":"
         << setw(2) << setfill('0') << classTime.minute << ":"
         << setw(2) << setfill('0') << classTime.second << endl;
    cout << "Lunch time: " << lunchTime.hour << ":" << lunchTime.minute << endl;
    cout << "=========================================================" << endl;

    cout << "Student name: " << studentNameA.name << endl;
    cout << "Student birthday: " 
         << studentNameA.birthday.day << "/" 
         << studentNameA.birthday.month << "/" 
         << studentNameA.birthday.year << endl;
    cout << "Student ID: " << studentNameA.id << endl;
    cout << "=========================================================" << endl;

    Student studentNameB = studentNameA;
    studentNameB.name[12] = 'e';
    studentNameB.id++;
    studentNameB.birthday.day = 16;
    studentNameB.birthday.month = 2;

    cout << "Student name: " << studentNameB.name << endl;
    cout << "Student birthday: " 
         << studentNameB.birthday.day << "/" 
         << studentNameB.birthday.month << "/" 
         << studentNameB.birthday.year << endl;
    cout << "Student ID: " << studentNameB.id << endl;
    cout << "=========================================================" << endl;

    studentNameB.birthday = studentBirthday;
    cout << "Change Student B's birthday: "
         << studentNameB.birthday.day << "/" 
         << studentNameB.birthday.month << "/" 
         << studentNameB.birthday.year << endl;
    return 0;
}

