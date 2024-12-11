#include <iostream>
//PROTÒTIPOS DAS FUNCOES
float Sum(float num1, float num2);
float Subtraction(float num1, float num2);
float Multiplication(float num1, float num2);
float Division(float num1, float num2);


int main()
{
	//aqui declare como float
	float Num1, Num2;

	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Num1;

	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Num2;

	std::cout << "\n*** Resultado das operacoes***\n";
	std::cout << Num1 << " e " << Num2 << "\n";
	std::cout << "Sum: " << Sum(Num1, Num2) << "\n";
	std::cout << "Subtraction: " << Subtraction(Num1, Num2) << "\n";
	std::cout << "Multiplication: " << Multiplication(Num1, Num2) << "\n";
	std::cout << "Division: " << Division(Num1, Num2) << "\n";
	   	  
	return 0;
}

float Sum(float num1, float num2)
{
	return num1 + num2;
}

float Subtraction(float num1, float num2)
{
	return num1 - num2;
}

float Multiplication(float num1, float num2)
{
	return num1 * num2;
}

float Division(float num1, float num2)
{
	return num1 / num2;
}