#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero{ 4096 };
	int* ptr = &Numero;
	int* ptr2 = ptr;

	std::cout << "Endere�o contido em ptr: " << ptr << "\n";
	std::cout << "Endere�o contido em ptr2: " << ptr2 << "\n";

	std::cout << "Endere�o de ptr na mem�ria RAM: " << &ptr << "\n";
	std::cout << "Endere�o de ptr2 na mem�ria RAM: " << &ptr2 << "\n";

	*ptr2 = (*ptr + 10);
	std::cout << "\nValor de Numero agora: " << Numero << "\n";

	/*
	std::cout << "\nValor da Vari�vel N�mero: " << Numero << "\n";
	std::cout << "\nValor da Vari�vel ptr: " << ptr << "\n";
	std::cout << "\nValor do Endere�o de N�mero: " << &Numero << "\n";
	std::cout << "\nValor da Endere�o que ptr est� carregado na RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na vari�vel apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na vari�vel apontada por ptr: " << *ptr << "\n";
	*/

	system("PAUSE");
	return 0;
} 