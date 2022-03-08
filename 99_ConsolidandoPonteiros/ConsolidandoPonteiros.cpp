#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero{ 4096 };
	int* ptr = &Numero;
	int* ptr2 = ptr;

	std::cout << "Endereço contido em ptr: " << ptr << "\n";
	std::cout << "Endereço contido em ptr2: " << ptr2 << "\n";

	std::cout << "Endereço de ptr na memória RAM: " << &ptr << "\n";
	std::cout << "Endereço de ptr2 na memória RAM: " << &ptr2 << "\n";

	*ptr2 = (*ptr + 10);
	std::cout << "\nValor de Numero agora: " << Numero << "\n";

	/*
	std::cout << "\nValor da Variável Número: " << Numero << "\n";
	std::cout << "\nValor da Variável ptr: " << ptr << "\n";
	std::cout << "\nValor do Endereço de Número: " << &Numero << "\n";
	std::cout << "\nValor da Endereço que ptr está carregado na RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na variável apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na variável apontada por ptr: " << *ptr << "\n";
	*/

	system("PAUSE");
	return 0;
} 