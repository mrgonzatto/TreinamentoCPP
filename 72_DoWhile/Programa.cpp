#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Escolha = 0;
	do
	{
		std::cout << "*****Tickets Cinema*****" << std::endl;
		std::cout << "1 - Meia Entrada\n";
		std::cout << "2 - Inteira\n";
		std::cout << "3 - Sair\n";
		std::cout << "\nEscolha sua opção: ";

		std::cin >> Escolha;

		switch (Escolha)
		{
			case 1 :
				std::cout << "\nMeia Entrada adquirida!";
			break;
			case 2:
				std::cout << "\nInteira adquirida!";
			break;
			case 3:
				std::cout << "\nSaindo do menu tickets...\n";
				break;
		}

	} while (Escolha != 3);

	system("PAUSE");
	return 0;
}