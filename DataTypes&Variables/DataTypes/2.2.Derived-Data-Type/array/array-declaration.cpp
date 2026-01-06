#include <iostream>

using namespace std;


int main()
{
    const int N = 2, index = 5;
    //Declaration without initialization
    int a[3];
    double b[index];
    char c[N]; //C++ only

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    cout << "Array a: ";
    for(int i = 0; i < 3; i++) cout << a[i] << " ";
    cout << endl;

    cout << "Array b: ";
    for(int i = 0; i < index; i++) 
    {
        b[i] = (i + 1) * 1.5;
        cout << b[i] << " ";
    }
    cout << endl;
    
    c[0] = 'H';
    c[1] = 'I';

    cout << "Array c: ";
    for(int i = 0; i < 2; i++) cout << c[i] << " ";
    cout << endl;

    //Declaration with number of elements and initialization of the elements
    int d[3]= {1, 2, 3};
    double e[5]= {1, 2, 3};
    char f[4]= {'A', 'B', 'C', 'D'};

    cout << "Array d: ";
    for(int i = 0; i < 3; i++) cout << d[i] << " ";
    cout << endl;

    cout << "Array e: ";
    for(int i = 0; i < 5; i++) cout << e[i] << " ";
    cout << endl;
    
    cout << "Array f: ";
    for(int i = 0; i < 4; i++) cout << f[i] << " ";
    cout << endl;
    
    //Array declaration and initialization of each element, number of elements is defined automatically
    int g[]= {1, 2, 3, 4, 5};
    double h[]= {1, 2, 3};
    double k[]= {6};
    char l[]= {'a'};

    cout << "Array g: ";
    for(int i = 0; i < 6; i++) cout << g[i] << " ";
    cout << endl;

    cout << "Array h: ";
    for(int i = 0; i < 4; i++) cout << h[i] << " ";
    cout << endl;

    cout << "Array k: ";
    for(int i = 0; i < 3; i++) cout << k[i] << " ";
    cout << endl;

    cout << "Array l: ";
    for(int i = 0; i < 3; i++) cout << l[i] << " ";
    cout << endl;

    //Declaration of multi-dimension array
    double X[2][3];
    int Y[3][2]={{1,2},{3,4},{5,6}};

    X[0][0] = (3.5, 4.5);
    X[0][1] = (2.3, 4.1);
    X[0][2] = (3.4, 9.5);
    X[1][0] = (5.6, 7.2);
    X[1][1] = (6.5, 6.2);
    X[1][2] = (9.7, 8.6);

    cout << "Array X: " << endl;
    for(int i = 0; i < 2; i ++)
    {
        for(int j = 0; j < 3; j++) cout << X[i][j] << " ";
        cout << endl;
    }

    cout << "Array Y: " << endl;
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 2; j++) cout << Y[i][j] << " ";
        cout << endl;
    }
    
}