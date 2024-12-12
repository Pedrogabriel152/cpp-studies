#include "../headers/operations.h"
#include <math.h>

int sum(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float)a / (float)b;
}

float raise(int a, int b) {
    return pow(a, b);
}

float root(int a, int b) {
    int i = multiplication(a, b);
    return sqrt(i);
}