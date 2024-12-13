#include <iostream>

using namespace std;

int main() {
    int number = 234;
    int *pointer = &number;

    cout << "Number: " << number << endl;

    *pointer = 1456;
    cout << "Number with pointer: " << *pointer << endl;
    cout << "Number RAM: " << &number << endl;
    cout << "Pointer RAM: " << &pointer << endl;

    int *pointer2 = pointer;
    
    *pointer += 200;

    cout << "Number: " << number << endl;
    cout << "Number with pointer: " << *pointer << endl;
    cout << "Number with pointer2: " << *pointer2 << endl;
    cout << "Pointer RAM: " << &pointer << endl;
    cout << "Pointer2 RAM: " << &pointer2 << endl;

    return 0;
}