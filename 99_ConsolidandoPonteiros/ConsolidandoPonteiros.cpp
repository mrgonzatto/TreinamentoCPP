#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero{ 102 };
	int* ptr = &Numero;

	std::cout << "\nValor da Vari�vel N�mero: " << Numero << "\n";
	std::cout << "\nValor da Vari�vel ptr: " << ptr << "\n";
	std::cout << "\nValor do Endere�o de N�mero: " << &Numero << "\n";
	std::cout << "\nValor da Endere�o que ptr est� carregado na RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na vari�vel apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na vari�vel apontada por ptr: " << *ptr << "\n";

	system("PAUSE");
	return 0;
} 