#include <iostream>
#include <locale>
int main()
{
	setlocale(LC_ALL, "portuguese");

	double Numeros[10];
	double Soma{ 0.0 };

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite o N�mero" << (i + 1) << ": ";
		std::cin >> Numeros[i];
		Soma += Numeros[i];

		system("CLS || Clear");
	}

	std::cout << "A soma dos n�meros �: " << Soma << std::endl;

	system("PAUSE");

	return 0;
}