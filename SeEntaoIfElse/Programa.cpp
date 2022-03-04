#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;

	std::string SehaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;
	
	if (SenhaDigitada == SehaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!!!\n";
		system("PAUSE");
		bAcesso = true;
	}
	else
	{
		std::cout << "\nAcesso Negado!!!\n";
		bAcesso = false;
		system("PAUSE");
		exit(0);
	}

	bFezSol = true;
	bCarroPronto = false;
	bSalarioDepositado = true;

	if (bAcesso == true)
	{
		if (bFezSol && bCarroPronto && bSalarioDepositado)
		{
			std::cout << "Vai dar praia!\n";
		}
		else if (!bSalarioDepositado)
		{
			std::cout << "Vai dar praia! O salário não foi depositado.\n";
		}
		else
		{
			std::cout << "Não vai dar praia!\n";
		}
	}

	return 0;
}