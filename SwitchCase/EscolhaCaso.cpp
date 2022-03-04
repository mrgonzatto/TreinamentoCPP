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

	std::cout << "Qual operação deseja efetuar? \n+ Adição \n- Subtração \n* Multiplicação  \n/Divisão \n";
	std::cout << "Digite sua opção: \n";
	std::cin >> Operacao;

	switch (Operacao)
	{
	case '+': std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-': std::cout << "\nSubtração de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*': std::cout << "\nMultiplicação de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/': std::cout << "\nDivisão de Num1 / Num2 = " << Num1 / Num2;
		break;
	default:
		std::cout << "Voce nao digitou um operador válido!";
		break;
	}

	std::cout << "\n";
	system("PAUSE");
	return 0;
}