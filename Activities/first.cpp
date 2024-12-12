#include <iostream>

using namespace std;

int main()
{
    cout << "\033[c1;c2 Vou \n aprender \n a\n programar\n na\n Linguagem\n C++ \033[0" << endl;
    cout << "\033[31mTexto em vermelho\033[0m" << endl; // Vermelho
    cout << "\033[32m" << "Texto em verde" << "\033[0m" << endl;   // Verde
    cout << "\033[34m" << "Texto em azul" << "\033[0m" << endl;    // Azul
    return 0;
}