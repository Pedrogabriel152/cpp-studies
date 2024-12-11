#include <iostream>

#define D 5

int main()
{
    const int A = 5;
    const int B = 10;
    const int C= A+ B;
    std::cout << "c = " << &C << std::endl;
    std::cout << "D = " << D << std::endl;
    return 0;
}