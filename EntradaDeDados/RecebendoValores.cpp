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

	system("PAUSE");
}