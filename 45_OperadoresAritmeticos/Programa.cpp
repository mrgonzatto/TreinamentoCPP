#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero01, Numero02;
	int Soma;
	int Subtracao;
	int Multiplicacao;
	float Divisao;
	float RestoDiv;

	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Numero01;
	std::cout << "N�mero01 = " << Numero01 << "\n";

	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Numero02;
	std::cout << "N�mero02 = " << Numero02 << "\n";

	Soma = Numero01 + Numero02;
	std::cout << "A Soma dos dois n�meros � " << Soma << "\n";

	Subtracao = Numero01 - Numero02;
	std::cout << "A Subtra��o dos dois n�meros � " << Subtracao << "\n";

	Multiplicacao = Numero01 * Numero02;
	std::cout << "A Multiplica��o dos dois n�meros � " << Multiplicacao << "\n";

	Divisao = Numero01 / Numero02;
	std::cout << "A Divis�o dos dois n�meros � " << Divisao << "\n";

	RestoDiv = Numero01 % Numero02;
	std::cout << "O Resto da Divis�o dos dois n�meros � " << RestoDiv << "\n";

	// Entrada de m�ltiplos dados
	int Num1, Num2, Num3, Num4;
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "\nSoma = " << (Num1 + Num2 + Num3 + Num4) << std::endl;

	system("PAUSE");

	return 0;
}