#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\nTamanho Vari�vel N�mero: " << sizeof(Numero) << " Bytes\n";
	std::cout << "\nTamanho Vari�vel Sal�rio: " << sizeof(Salario) << " Bytes\n";

	// Obter endere�o de mem�ria
	// O endere�o da vari�vel � o na verdade o endere�o do seu primeiro byte
	// A partir da�, o processador sabe que deve ler os pr�ximos endere�os at� 
	// completar o tamanho em bytes do tipo da vari�vel declarada
	std::cout << "\nEndere�o de mem�ria da vari�vel N�mero" << &Numero << "\n";
	std::cout << "\nEndere�o de mem�ria da vari�vel Sal�rio" << &Salario << "\n";

	system("PAUSE");
	return 0;
}