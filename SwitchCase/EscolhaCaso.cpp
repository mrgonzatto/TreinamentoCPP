#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Num1, Num2;
	char Operacao;

	std::cout << "\nDigite um numero: ";
	std::cin >> Num1;
	std::cout << "\nDigite outro numero: ";
	std::cin >> Num2;

	std::cout << "Qual opera��o deseja efetuar? \n+ Adi��o \n- Subtra��o \n* Multiplica��o  \n/Divis�o \n";
	std::cout << "Digite sua op��o: \n";
	std::cin >> Operacao;

	switch (Operacao)
	{
	case '+': std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-': std::cout << "\nSubtra��o de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*': std::cout << "\nMultiplica��o de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/': std::cout << "\nDivis�o de Num1 / Num2 = " << Num1 / Num2;
		break;
	default:
		std::cout << "Voce nao digitou um operador v�lido!";
		break;
	}

	std::cout << "\n";
	system("PAUSE");
	return 0;
}