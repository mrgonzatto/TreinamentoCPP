#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero01, Numero02;

	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Numero01;
	std::cout << "N�mero01 = " << Numero01 << "\n";

	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Numero02;
	std::cout << "N�mero02 = " << Numero02 << "\n";

	// Entrada de m�ltiplos dados
	int Num1, Num2, Num3, Num4;
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "\nSoma = " << (Num1 + Num2 + Num3 + Num4) << std::endl;

	system("PAUSE");

	return 0;
}