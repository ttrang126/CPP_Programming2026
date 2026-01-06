#include <iostream>

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
    Date victoryDays[] = {
        {19, 8, 1945},
        {2, 9, 1945},
        {30, 4, 1975}  
    };

    Date independentDays = victoryDays[1];
    cout << "Independent Day: " 
         << independentDays.day << "/"
         << independentDays.month << "/"
         << independentDays.year << endl;

    Date *p = &independentDays;
    (*p).year += 80;

    cout << "Indenpendent Day 80th Year Anniversary: "
         << independentDays.day << "/"
         << independentDays.month << "/"
         << independentDays.year << endl;
    
    p->year -= 50;
    cout << "Indenpendent Day: "
         << independentDays.day << "/"
         << independentDays.month << "/"
         << independentDays.year << endl;

    return 0;
}