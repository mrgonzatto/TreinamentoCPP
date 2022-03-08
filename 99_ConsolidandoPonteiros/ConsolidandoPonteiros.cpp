#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero{ 102 };
	int* ptr = &Numero;

	std::cout << "\nValor da Variável Número: " << Numero << "\n";
	std::cout << "\nValor da Variável ptr: " << ptr << "\n";
	std::cout << "\nValor do Endereço de Número: " << &Numero << "\n";
	std::cout << "\nValor da Endereço que ptr está carregado na RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na variável apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na variável apontada por ptr: " << *ptr << "\n";

	system("PAUSE");
	return 0;
} 