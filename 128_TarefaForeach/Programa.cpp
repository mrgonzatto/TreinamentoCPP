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

	// std::defaultfloat é o padrão para formatação de ponto flutuante para 4 dígitos
	std::cout << "Média de Velocidade: " << std::defaultfloat << std::setprecision(4) << SomaVelocidades / TamArray << "\n";
	
	// std::fized é o padrão para formatação de ponto flutuante para 4 dígitos APÓS A VÍRGULA
	std::cout << "Média de Velocidade: " << std::fixed << std::setprecision(4) << SomaVelocidades / TamArray << "\n";

	// std::scientific é o padrão para formatação de ponto flutuante em notação científica
	std::cout << "Média de Velocidade: " << std::scientific << std::setprecision(4) << SomaVelocidades / TamArray << "\n";

	system("PAUSE");
	return 0;
}