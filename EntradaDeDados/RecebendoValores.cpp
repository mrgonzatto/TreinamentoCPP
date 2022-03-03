#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero01, Numero02;
	bool Comparacao;

	std::cout << "Digite o primeiro número: ";
	std::cin >> Numero01;
	std::cout << "Número01 = " << Numero01 << "\n";

	std::cout << "Digite o segundo número: ";
	std::cin >> Numero02;
	std::cout << "Número02 = " << Numero02 << "\n";

	// Entrada de múltiplos dados
	int Num1, Num2, Num3, Num4;
	std::cout << "Agora, informe 4 números consecutivos: \n";
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	std::cout << "\nSoma = " << (Num1 + Num2 + Num3 + Num4) << std::endl;

	Comparacao = (Numero01 == Numero02);
	std::cout << "Numero01 igual a Numero02?: " << Comparacao << "\n";
	Comparacao = (Numero01 != Numero02);
	std::cout << "Numero01 diferente a Numero02?: " << Comparacao << "\n";
	Comparacao = (Numero01 > Numero02);
	std::cout << "Numero01 maior que Numero02?: " << Comparacao << "\n";
	Comparacao = (Numero01 < Numero02);
	std::cout << "Numero01 menor que Numero02?: " << Comparacao << "\n";
	Comparacao = (Numero01 >= Numero02);
	std::cout << "Numero01 menor ou igual que Numero02?: " << Comparacao << "\n";
	Comparacao = (Numero01 <= Numero02);
	std::cout << "Numero01 menor ou igual que Numero02?: " << Comparacao << "\n";

	system("PAUSE");

	return 0;
}