#include <iostream>

using namespace std;

#define PI 3.14

int main()
{
    #ifdef PI
        cout << "PI is defined" << endl;
    #elif SQUARE
        cout << "SQUARE is defined" << endl;
    #else
        cout << "[ERROR] Both PI and SQUARE are not defined" << endl;
    #endif

    #ifndef SQUARE
        cout << "SQUARE is not defined" << endl;
    #else  
        cout << "SQUARE is  defined" << endl;
    #endif

    return 0;
}