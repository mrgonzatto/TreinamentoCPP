#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\nTamanho Variável Número: " << sizeof(Numero) << " Bytes\n";
	std::cout << "\nTamanho Variável Salário: " << sizeof(Salario) << " Bytes\n";

	// Obter endereço de memória
	// O endereço da variável é o na verdade o endereço do seu primeiro byte
	// A partir daí, o processador sabe que deve ler os próximos endereços até 
	// completar o tamanho em bytes do tipo da variável declarada
	std::cout << "\nEndereço de memória da variável Número" << &Numero << "\n";
	std::cout << "\nEndereço de memória da variável Salário" << &Salario << "\n";

	system("PAUSE");
	return 0;
}