#include <iostream>

int variableStatic() {
    static int x = 0;
    x++;
    return x;
}

int main() {
    for (int i = 0; i < 10; i++)
    {
        std::cout << variableStatic() << std::endl;
    }
    
    return 0;
}