#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero{ 234 };

	int* ptrNumero = &Numero;

	std::cout << "Valor de Numero atrav�s do ponteiro: " << *ptrNumero << std::endl;

	*ptrNumero = 1456;
	std::cout << "Novo valor de Numero atrav�s do ponteiro: " << *ptrNumero << std::endl;

	std::cout << "Endere�o na RAM de Numero: " << &Numero << "\n";
	std::cout << "Endere�o na RAM de ptrNumero: " << ptrNumero << "\n";

	int* OutroPtr = nullptr;
	OutroPtr = ptrNumero;
	std::cout << "Endere�o na RAM de OutroPtr: " << OutroPtr << "\n";

	*ptrNumero += 200;
	std::cout << "Novo valor de Numero atrav�s do OutroPtr: " << *OutroPtr << std::endl;

	system("PAUSE");
	return 0;
}