#include <iostream>
#include <iomanip>

int main()
{
	float Velocidades[]{ 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 98.7 };
	float SomaVelocidades{ 0.0 };
	int TamArray{ 0 };

	for (auto Velocidade : Velocidades)
	{
		SomaVelocidades += Velocidade;
		TamArray++;
	}

	// std::defaultfloat � o padr�o para formata��o de ponto flutuante para 4 d�gitos
	std::cout << "M�dia de Velocidade: " << std::defaultfloat << std::setprecision(4) << SomaVelocidades / TamArray << "\n";
	
	// std::fized � o padr�o para formata��o de ponto flutuante para 4 d�gitos AP�S A V�RGULA
	std::cout << "M�dia de Velocidade: " << std::fixed << std::setprecision(4) << SomaVelocidades / TamArray << "\n";

	// std::scientific � o padr�o para formata��o de ponto flutuante em nota��o cient�fica
	std::cout << "M�dia de Velocidade: " << std::scientific << std::setprecision(4) << SomaVelocidades / TamArray << "\n";

	system("PAUSE");
	return 0;
}