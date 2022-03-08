#include<iostream>

int ContadorChamadas()
{
	// Static significa que após a saída da função o valor não será perdido.
	// Indica que o valor será mantido mesmo após o encerramento da função
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