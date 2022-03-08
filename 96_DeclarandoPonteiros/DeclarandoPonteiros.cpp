#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	// Inicializa o ponteiro para n�o guardar lixo de mem�ria
	// indica que ele n�o est� apontando para lugar algum
	int* ptr { nullptr };
	std::cout << "Valor inicial de ptr: " << ptr << std::endl;
	// int* ptr; // Funciona da mesma forma
	int Numero = 101;

	Numero = 102;
	// Armazena o endere�o de mem�ria de Numero em ptr	
	ptr = &Numero;
	std::cout << "Valor atual de ptr: " << ptr << std::endl;

	// Se ptr tem o end de Numero, ent�o ele pode modificar o valor dela indiretamente.
	*ptr = 103;
	std::cout << "�ltimo valor de ptr: " << ptr << std::endl;

	// N�o exibe o conte�do das vari�veis, apenas o valor do primeiro endere�o
	// de mem�ria das vari�veis Numero e da vari�vel ponteiro ptr
	std::cout << "\nEndere�o de N�mero: " << &Numero << std::endl;
	std::cout << "Valor de N�mero: " << Numero << std::endl;
	std::cout << "\nEndere�o de ptr: " << &ptr << std::endl;
	std::cout << "Valor de ptr: " << *ptr << std::endl;

	system("PAUSE");
	return 0;
}