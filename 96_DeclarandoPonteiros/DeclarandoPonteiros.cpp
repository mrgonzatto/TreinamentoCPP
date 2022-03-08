#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int *ptr;
	// int* ptr; // Funciona da mesma forma
	int Numero = 101;

	// Não exibe o conteúdo das variáveis, apenas o valor do primeiro endereço
	// de memória das variáveis Numero e da variável ponteiro ptr
	std::cout << "\nEndereço de Número: " << &Numero << std::endl;
	std::cout << "\nEndereço de ptr: " << &ptr << std::endl;

	system("PAUSE");
	return 0;
}