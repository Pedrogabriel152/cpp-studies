#include <iostream>
#include "headers/operations.h"

using namespace std;

int main(){
    int number1, number2;
    cin.clear();
    cout << "Enter the first number: ";
    cin >> number1;
    cin.clear();
    cout << "Enter the second number: ";
    cin >> number2;
    cin.clear();
    cout << "Sum: " << sum(number1, number2) << endl;
    cout << "Subtraction: " << subtraction(number1, number2) << endl;
    cout << "Multiplication: " << multiplication(number1, number2) << endl;
    cout << "Division: " << division(number1, number2) << endl;
    cout << "Raise: " << raise(number1, number2) << endl;
    cout << "Root: " << root(number1, number2) << endl;

    return 0;
}