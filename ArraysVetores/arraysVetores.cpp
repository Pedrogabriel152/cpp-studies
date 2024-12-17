#include <iostream>
#include <string>

using namespace std;

int main() {
    float notes[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

    float media, sum = 0.0f;
    std::string nameStudent;

    cout << "\nDigite o nome do Aluno: ";
    cin >> nameStudent;

    for (int i = 0; i < 5; i++) {
        cout << "\nDigite a nota " << (i+1)<< ": ";
        cin >> notes[i];
        sum += notes[i];
        system("clear");
    }

    media = sum / 5;

    cout << "\n*** Resultado das operacoes***\n";
    cout << "\nA Media das notas do aluno foi: " << media << "\n";
    return 0;
}