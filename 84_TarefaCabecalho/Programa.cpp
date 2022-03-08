#include <iostream>
#include "Matematica.h"

int main()
{
	int numero1, numero2;
	std::cout << "\nDigite o Primeiro Numero: ";
	std::cin >> numero1;
	std::cout << "\nDigite o Segundo Numero: ";
	std::cin >> numero2;

	std::cout << "\nResultado Operadores Matemáticos:\n";
	std::cout << "\nSoma: " << Soma(numero1, numero2);
	std::cout << "\nSubtracao: " << Subtracao(numero1, numero2);
	std::cout << "\nMultiplicacao: " << Multiplicacao(numero1, numero2);
	std::cout << "\nDivisao: " << Divisao(numero1, numero2);
	std::cout << "\nPotenciacao: " << Potencia(numero1, numero2);
	std::cout << "\nRaiz Quadrada N1: " << RaizQuadrada(numero1);
	std::cout << "\nRaiz Quadrada N2: " << RaizQuadrada(numero2);

	system("PAUSE");
	return 0;
}