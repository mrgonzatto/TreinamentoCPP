#include <iostream>
#include <tchar.h>

// Protótipo da função
bool isPar( int num );

/*
int main()
{
	// Configura exibição de caracteres pt-BR
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero;

	std::cout << "Digite um número inteiro: ";
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
