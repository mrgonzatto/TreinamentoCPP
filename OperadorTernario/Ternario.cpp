#include <iostream>

int main()
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero02;

	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	std::cout << "\nMaior Numero digitado: " << MaiorNumero << std::endl;
	/*
	if (Numero01 > Numero02)
	{
		std::cout << "\nNumero01 > Numero02";
	}
	else
	{
		std::cout << "Numero02 > Numero01\n";
	}
	*/

	system("PAUSE");
	return 0;

}