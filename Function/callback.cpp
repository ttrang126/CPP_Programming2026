#include <iostream>

using namespace std;

//Callback funtion
void onFinish()
{
    cout << "Task finised !" << endl;
}

//Function nhận callback
void doTask(void (*callback)())
{
    cout << "Doing task ..." << endl;
    callback();
}

int main()
{
    doTask(onFinish);
    
    return 0;
}

