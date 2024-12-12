#include <iostream>

void coordinates(int x = 0, int y = 0, int z = 0);

void coordinates(int x, int y, int z) {
    x *= 10;
    y *= 10;
    z *= 10;
    std::cout << "(" << x << " " << y << " " << z << ")" << std::endl;
}

int main() {
    coordinates();
    coordinates(1);
    coordinates(1, 2);
    coordinates(1, 2, 3);
    return 0;
}