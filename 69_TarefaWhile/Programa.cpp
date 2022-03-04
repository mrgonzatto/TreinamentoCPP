#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero = 0;
	std::cout << "Números PARES: \n";
	while (Numero <= 50)
	{
		if( Numero%2 == 0 )
			std::cout << Numero << " ";

		Numero++;
	}

	Numero = 0;
	std::cout << "\nNúmeros IMPARES: \n";
	while (Numero <= 50)
	{
		if (Numero % 2 != 0)
			std::cout << Numero << " ";

		Numero++;
	}

	system("PAUSE");
	return 0;
}