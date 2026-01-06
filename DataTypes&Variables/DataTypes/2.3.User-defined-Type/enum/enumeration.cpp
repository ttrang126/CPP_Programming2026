#include <iostream>

using namespace std;

enum Week {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main()
{
    enum Week day;

    day = Wed;

    cout << day + 2 << endl;

    return 0;
}