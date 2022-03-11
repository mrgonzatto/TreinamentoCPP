#include "Pessoa.h"

void Pessoa::AcessarSistema()
{
	std::cout << "\nAcesso ao sistema concedido!\n";
}

std::string Pessoa::GetNome()
{
	return Nome;
}

int Pessoa::GetCPF()
{
	return CPF;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}

void Pessoa::SetNome(std::string NovoNome)
{
	this->Nome = NovoNome;
}

void Pessoa::SetCPF(int NovoCPF)
{
	this->CPF = NovoCPF;
}

void Pessoa::SetMatricula(int NovoMatricula)
{
	this->Matricula = NovoMatricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "****DADOS****\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";
}
