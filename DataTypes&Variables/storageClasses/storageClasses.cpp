#include <iostream>

using namespace std;

int count = 0;

void autoStorageClass()
{
    auto subject = "Mathematics";
    auto gpa = 3.5;
    auto credits = 3;

    cout << "Subject: " << subject << endl;
    cout << "GPA: " << gpa << endl;
    cout << "credits: " << credits << endl;
}

void externStorageClass()
{
    extern int externVar;

    cout << "Value of 'externVar' declared as extern: " << externVar << endl;

    externVar = 10;
    cout << "Value of 'externVar' declared as extern that has been modifed: " << externVar << endl;
}

void staticStorageClass()
{
    static int i = 0;
    
    cout << "-----Static function-----" << endl;
    cout << "i is: " << i << " and count is: " << count << endl;
    i++;
}

void nonStaticStorageClass()
{
    int i = 0;
    
    cout << "-----Non-Static function-----" << endl;
    cout << "i is: " << i << " and count is: " << count << endl;
    i++;
}

void registerStorageClass()
{
    register char c = 'T';
    cout << "Register variable: " << c << endl;
}

class Mutable
{
    public:
        int x;
        mutable int y;

    Mutable()
    {
        x = 5;
        y = 6;
    }
};

int main() 
{
    cout << "========Automatic Storage Class========" << endl;
    autoStorageClass();

    cout << "========Extern Storage Class========" << endl;
    externStorageClass();

    cout << "========Static Storage Class========" << endl;
    while(1)
    {
        staticStorageClass();
        nonStaticStorageClass();
        count++;
        if(count == 5) break;
    }

     cout << "========Register Storage Class========" << endl;
     registerStorageClass();

    cout << "========Mutable Storage Class========" << endl;
    const Mutable t;
    cout << "-----Before-----" << endl;
    cout << "x = " << t.x << endl;
    cout << "y = " << t.y << endl;

    t.y = 14;

    cout << "-----After-----" << endl;
    cout << "x cannot change" << endl;
    cout << "y = " << t.y << endl;

    // Uncommenting below lines
    // will throw error
    // t.x = 8;
    // cout << "x = << t.x << endl;

    return 0;
}