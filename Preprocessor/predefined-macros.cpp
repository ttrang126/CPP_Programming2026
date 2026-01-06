#include <iostream>

using namespace std;

int main()
{
    cout << "Date: " << __DATE__ << endl;
    cout << "Time: " << __TIME__ << endl;
    cout << "File name: " << __FILE__ << endl;
    cout << "Current Line number: " << __LINE__ << endl;

    return 0;
}