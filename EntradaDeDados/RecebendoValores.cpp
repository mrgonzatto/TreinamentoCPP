#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero01, Numero02;

	std::cout << "Digite o primeiro número: ";
	std::cin >> Numero01;
	std::cout << "Número01 = " << Numero01 << "\n";

	std::cout << "Digite o segundo número: ";
	std::cin >> Numero02;
	std::cout << "Número02 = " << Numero02 << "\n";

	// Entrada de múltiplos dados
	int Num1, Num2, Num3, Num4;
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "\nSoma = " << (Num1 + Num2 + Num3 + Num4) << std::endl;

	system("PAUSE");

	return 0;
}