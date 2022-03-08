#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero{ 234 };

	int* ptrNumero = &Numero;

	std::cout << "Valor de Numero através do ponteiro: " << *ptrNumero << std::endl;

	*ptrNumero = 1456;
	std::cout << "Novo valor de Numero através do ponteiro: " << *ptrNumero << std::endl;

	std::cout << "Endereço na RAM de Numero: " << &Numero << "\n";
	std::cout << "Endereço na RAM de ptrNumero: " << ptrNumero << "\n";

	int* OutroPtr = nullptr;
	OutroPtr = ptrNumero;
	std::cout << "Endereço na RAM de OutroPtr: " << OutroPtr << "\n";

	*ptrNumero += 200;
	std::cout << "Novo valor de Numero através do OutroPtr: " << *OutroPtr << std::endl;

	system("PAUSE");
	return 0;
}