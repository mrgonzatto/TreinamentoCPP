#include <iostream>
#include <tchar.h>

// Prot�tipo da fun��o
bool isPar( int num );

/*
int main()
{
	// Configura exibi��o de caracteres pt-BR
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero;

	std::cout << "Digite um n�mero inteiro: ";
	std::cin >> Numero;

	if (isPar(Numero))
	{
		std::cout << "Numero: " << Numero << " PAR\n";
	}
	else
	{
		std::cout << "Numero: " << Numero << " IMPAR\n";
	}

	system("PAUSE");
	return 0;
}
*/

bool isPar(int num)
{
	if (num % 2 == 0)
		return true;
	else 
		return false;
}
