#include <iostream>

using namespace std;

class A
{
    public:
        char c;         //1 byte + 1 padding
        short s1;       //2 bytes + 4 padding
        double d1;      //8 bytes
        long l;         //4 bytes   
        short s;        //2 bytes + 2 padding
        int i1;        //4 bytes + 4 padding
};

class B : public A
{
    double d;
};

int main()
{
    cout << sizeof(A) << endl;         //32 bytes
    cout << sizeof(B) << endl;         //40 bytes

    return 0;
}