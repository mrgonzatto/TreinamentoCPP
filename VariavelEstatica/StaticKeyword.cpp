#include<iostream>

int ContadorChamadas()
{
	// Static significa que ap�s a sa�da da fun��o o valor n�o ser� perdido.
	// Indica que o valor ser� mantido mesmo ap�s o encerramento da fun��o
	static int NumChamadasDaFuncao = 0;
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;
}