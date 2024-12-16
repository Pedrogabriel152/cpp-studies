#include "../headers/alterNumberPointer.h"

void alterNumber(int* number, int* number2) {
    int temp = *number;
    *number = *number2;
    *number2 = temp;
}