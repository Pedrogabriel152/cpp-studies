#include <iostream>
#include "headers/alterNumberPointer.h"

using namespace std;

int main() {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
    alterNumber(&number1, &number2);
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
    return 0;
}