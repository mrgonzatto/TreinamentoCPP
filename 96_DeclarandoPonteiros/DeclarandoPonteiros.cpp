#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int *ptr;
	// int* ptr; // Funciona da mesma forma
	int Numero = 101;

	// N�o exibe o conte�do das vari�veis, apenas o valor do primeiro endere�o
	// de mem�ria das vari�veis Numero e da vari�vel ponteiro ptr
	std::cout << "\nEndere�o de N�mero: " << &Numero << std::endl;
	std::cout << "\nEndere�o de ptr: " << &ptr << std::endl;

	system("PAUSE");
	return 0;
}