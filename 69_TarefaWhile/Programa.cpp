#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero = 0;
	std::cout << "N�meros PARES: \n";
	while (Numero <= 50)
	{
		if( Numero%2 == 0 )
			std::cout << Numero << " ";

		Numero++;
	}

	Numero = 0;
	std::cout << "\nN�meros IMPARES: \n";
	while (Numero <= 50)
	{
		if (Numero % 2 != 0)
			std::cout << Numero << " ";

		Numero++;
	}

	system("PAUSE");
	return 0;
}