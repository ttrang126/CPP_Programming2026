#include <iostream>

#define PI 3.14
#define getmax(a,b) ((a) > (b) ? (a):(b))
#define square(x) ((x) * (x))
#define PRINT(x) std::cout << "The value is " << x << std::endl;

int main()
{
    int value = 24;

    std::cout << "PI = " << PI << std::endl;
    std::cout << "Max value: " << getmax(5, 19) << std::endl;
    std::cout << "Square  of 3 is: " << square(3) << std::endl;
    PRINT(value);

    return 0;
}