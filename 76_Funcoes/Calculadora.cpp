#include <iostream>

float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);

int main()
{
	int Num1, Num2;

	std::cout << "\nDigite o Primeiro Numero: ";
	std::cin >> Num1;
	std::cout << "\nDigite o Segundo Numero: ";
	std::cin >> Num2;

	std::cout << "\n*** Resultado das operacoes***\n";
	std::cout << Num1 << " e " << Num2 << "\n";
	std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
	std::cout << "Subtracao: " << Subtracao(Num1, Num2) << "\n";
	std::cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
	std::cout << "Divisao: " << Divisao(Num1, Num2) << "\n";

	return 0;
}

float Soma(float num1, float num2) 
{
	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}
float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}
float Divisao(float num1, float num2)
{
	return num1 / num2;
}