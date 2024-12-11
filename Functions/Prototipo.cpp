#include <iostream>

float soma(float a, float b);

int main() {
    for (int i = 1; i <= 10; i++) {
        std::cout << soma(i, i + 1) << std::endl;
    }
    return 0;
}

float soma(float a, float b) {
    return a + b;
}