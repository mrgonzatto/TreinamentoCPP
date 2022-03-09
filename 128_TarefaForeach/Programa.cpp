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

	std::cout << "Média de Velocidade: " << std::setprecision(4) << SomaVelocidades / TamArray << "\n";

	system("PAUSE");
	return 0;
}