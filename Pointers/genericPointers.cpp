#include <iostream>
using namespace std;

int main() {
    int number = 4890;
    char letter = 'A';
    void *ptrG;

    ptrG = &letter;

    cout << "Number: " << number << endl;
    cout << "Letter: " << letter << endl;
    cout << "Value of pointer: " << *(char*)ptrG << endl;
    ptrG = &number;
    cout << "Value of pointer: " << *(int*)ptrG << endl;

    return 0;
}