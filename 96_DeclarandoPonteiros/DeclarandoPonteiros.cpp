#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	// Inicializa o ponteiro para não guardar lixo de memória
	// indica que ele não está apontando para lugar algum
	int* ptr { nullptr };
	std::cout << "Valor inicial de ptr: " << ptr << std::endl;
	// int* ptr; // Funciona da mesma forma
	int Numero = 101;

	Numero = 102;
	// Armazena o endereço de memória de Numero em ptr	
	ptr = &Numero;
	std::cout << "Valor atual de ptr: " << ptr << std::endl;

	// Se ptr tem o end de Numero, então ele pode modificar o valor dela indiretamente.
	*ptr = 103;
	std::cout << "Último valor de ptr: " << ptr << std::endl;

	// Não exibe o conteúdo das variáveis, apenas o valor do primeiro endereço
	// de memória das variáveis Numero e da variável ponteiro ptr
	std::cout << "\nEndereço de Número: " << &Numero << std::endl;
	std::cout << "Valor de Número: " << Numero << std::endl;
	std::cout << "\nEndereço de ptr: " << &ptr << std::endl;
	std::cout << "Valor de ptr: " << *ptr << std::endl;

	system("PAUSE");
	return 0;
}