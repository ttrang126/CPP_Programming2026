#include <iostream>

using namespace std;

class Sample
{
    public:
        Sample()
        {
            cout << "Print Constructor" << endl;
        }

        ~Sample()
        {
            cout << "Print Destructor" << endl;
        }
};

int main()
{
    Sample obj1;
    Sample obj2;

    return 0;
}