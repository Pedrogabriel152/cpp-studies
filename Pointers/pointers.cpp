#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    int number = 10;
    int *pointer = &number;

    cout << "Number: " << number << endl;
    cout << "Pointer: " << pointer << endl;
    cout << "Value of pointer: " << *pointer << endl;

    *pointer = 20;

    cout << "Number: " << number << endl;
    cout << "Value of pointer: " << *pointer << endl;

    return 0;
}