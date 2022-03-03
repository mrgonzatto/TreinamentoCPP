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

	std::cout << "Digite o primeiro número: ";
	std::cin >> Numero01;
	std::cout << "Número01 = " << Numero01 << "\n";

	std::cout << "Digite o segundo número: ";
	std::cin >> Numero02;
	std::cout << "Número02 = " << Numero02 << "\n";

	Soma = Numero01 + Numero02;
	std::cout << "A Soma dos dois números é " << Soma << "\n";

	Subtracao = Numero01 - Numero02;
	std::cout << "A Subtração dos dois números é " << Subtracao << "\n";

	Multiplicacao = Numero01 * Numero02;
	std::cout << "A Multiplicação dos dois números é " << Multiplicacao << "\n";

	Divisao = Numero01 / Numero02;
	std::cout << "A Divisão dos dois números é " << Divisao << "\n";

	RestoDiv = Numero01 % Numero02;
	std::cout << "O Resto da Divisão dos dois números é " << RestoDiv << "\n";

	// Entrada de múltiplos dados
	int Num1, Num2, Num3, Num4;
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "\nSoma = " << (Num1 + Num2 + Num3 + Num4) << std::endl;

	system("PAUSE");

	return 0;
}