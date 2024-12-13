#include <iostream>

using namespace std;

int main() {
    int number = 1024;
    char letter = 'A';
    int &ref = number;

    cout << "Number: " << number << endl;
    cout << "Letter: " << letter << endl;
    cout << "Reference: " << ref << endl;
    cout << "Reference address: " << &ref << endl;

    return 0;
}