#include <iostream>
#include <locale>

class Casa
{

private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);

};

int main()
{
	setlocale(LC_ALL, "portuguese");

	//Casa CasaDePraia;
	//CasaDePraia.MostrarTamanho();
	//CasaDePraia.SetNumQuartos(6);

	// É POSSÍVEL INSTANCIAR O OBJETO E ACESSAR VIA PONTEIRO
	Casa* CasaDePraia = new Casa(); // Instanciando objeto via alocação dinâmica com ponteiros*
	(*CasaDePraia).MostrarTamanho();
	(*CasaDePraia).SetNumQuartos(6);

	std::cout << "\n Num Quartos: " << (*CasaDePraia).ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: " << (*CasaDePraia).TemSuite() ? std::cout << "Sim" : std::cout << "Não" << "\n";
	std::cout << "\n";

	//TAMBÉM PODEMOS UTILIZAR A NOTAÇÃO FLECHA -> QUE É A MESMA COISA
	// apenas uma sintaxe simplificada	
	CasaDePraia->MostrarTamanho();
	CasaDePraia->SetNumQuartos(10);
	std::cout << "\n Num Quartos: " << CasaDePraia->ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: " << CasaDePraia->TemSuite() ? std::cout << "Sim" : std::cout << "Não" << "\n";
	std::cout << "\n";

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
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}