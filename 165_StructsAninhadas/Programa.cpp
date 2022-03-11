#include <iostream>
#include <cstring>
#include <locale>

struct Data
{
	int Dia;
	int Mes;
	int Ano;
};

struct Endereco
{
	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;
};

struct Pessoa
{
	std::string Nome;
	Data DtNascimento;
	Endereco Endereco;
};

int main()
{
	setlocale(LC_ALL, "portuguese");

	Pessoa Pessoa01[2];

	for (int i = 0; i < 2; i++)
	{
		Pessoa01[i].Nome = "Udemy";
		Pessoa01[i].DtNascimento.Dia = 01;
		Pessoa01[i].DtNascimento.Mes = 02;
		Pessoa01[i].DtNascimento.Ano = 2009;
		Pessoa01[i].Endereco.Rua = "Rua A";
		Pessoa01[i].Endereco.Cidade = "São Francisco";
		Pessoa01[i].Endereco.Pais = "EUA";
	}

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Nome: " << Pessoa01[i].Nome << "\n";
		std::cout << "Data Nascimento: " << Pessoa01[i].DtNascimento.Dia << "/" <<
			Pessoa01[i].DtNascimento.Mes << "/" << Pessoa01[i].DtNascimento.Ano << "\n";
		std::cout << "Endereço: Rua " << Pessoa01[i].Endereco.Rua << ", " << Pessoa01[i].Endereco.Cidade
			<< ", " << Pessoa01[i].Endereco.Pais << "\n";
	}


	
	system("PAUSE");
	return 0;
}