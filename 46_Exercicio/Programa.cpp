#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	float Num1, Num2, Num3;
	float Media{ 0.0 };
	char Resposta = 'n';

	do
	{
		std::cout << "Digite o Primeiro N�mero: ";
		std::cin >> Num1;
		std::cout << "Digite o Segundo N�mero: ";
		std::cin >> Num2;
		std::cout << "Digite o Terceiro N�mero: ";
		std::cin >> Num3;

		Media = (Num1 + Num2 + Num3) / 3;

		std::cout << "N�meros digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
		std::cout << "M�dia dos n�mero: " << Media << "\n";

		std::cout << "\nDeseja calcular outra M�dia Artm�tica? (Responda S para Sim e N para n�o:) ";
		std::cin >> Resposta;

	} while (Resposta == 'S' || Resposta == 's');



	system("PAUSE");
	return 0;
}