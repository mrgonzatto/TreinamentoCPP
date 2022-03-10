#include <iostream>
#include <locale>

class Casa
{
private: 
	// Atributos
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ false };
public:
	// Métodos
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
};

int main()
{
	setlocale(LC_ALL, "portuguese");

	Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	std::cout << "\n" << CasaDePraia.ObtenhaNumeroDeQuartos();
	std::cout << "\nTem suite: " << (CasaDePraia.TemSuite() ? "Sim" : "Não") << "\n";

	CasaDePraia.SetNumQuartos(1000);

	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{ 
		std::cout << "Numero de quartos inválido!\n";
	}
}
