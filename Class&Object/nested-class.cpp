#include <iostream>

using namespace std;

class Enclosing
{
    private:
        int x = 10;
    public:
        class Nested
        {
            private:
                int y = 9;
            public:
                void printX(Enclosing e)
                {
                    cout << "x = " << e.x << endl;
                }
        };

        /*
        Error: y is private in Nested
        void printY(Nested n)
        {
            cout << "y = " << n.y << endl;
        }
        */
};

int main()
{
    Enclosing en;
    Enclosing::Nested ne;
    ne.printX(en);

    return 0;
}