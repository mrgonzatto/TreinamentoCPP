#include "Professor.h"

void Professor::EfetuarChamada()
{
	std::cout << "Chamada efetuada!\n";
}

void Professor::EntregarPauta()
{
	std::cout << "Pauta entrege!\n";
}

std::string Professor::GetDepartamento()
{
	return Departamento;
}

void Professor::SetDepartamento(std::string NovoDepartamento)
{
	this->Departamento = NovoDepartamento;
}

void Professor::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Departamento: " << GetDepartamento() << "\n";
}
