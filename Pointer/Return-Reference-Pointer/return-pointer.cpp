#include <iostream>

using namespace std;

int *createValueDyn()
{
    int *ptr = new int(46);
    return ptr;                     //return pointer
}

int *createValueStat()
{
    static int x = 80;
    return (&x);
}

int main()
{
    int *pDyn = createValueDyn();       

    cout << "Value: " << *pDyn << endl;
    cout << "Addres: " << pDyn << endl;

    int *pStat = createValueStat();       

    cout << "Value: " << *pStat << endl;
    cout << "Addres: " << pStat << endl;

    delete pDyn;

    return 0;
}