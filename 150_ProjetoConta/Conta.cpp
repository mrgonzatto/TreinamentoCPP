#include "Conta.h"
#include <iostream>
#include <string>
#include <locale>

Conta::Conta()
{
	this->Banco = "";
	this->Agencia = 0;
	this->NumConta = 0;
	this->Titular = "";
	this->Saldo = 0.0;
	std::cout << "\Construtor Objeto Endereço: " << this << " executado!\n";
}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->SetBanco(Banco);
	this->SetAgencia(Agencia);
	this->SetNumConta(NumConta);
	this->SetTitular(Titular);
	this->Saldo = Saldo;
	std::cout << "\Construtor Objeto Endereço: " << this << " executado!\n";
}

Conta::~Conta()
{
	std::cout << "\nDestrutor Objeto Endereço: " << this << " executado!\n";
}

bool Conta::Sacar(double valor)
{
	if (Saldo < valor)
	{
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$ " << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		Saldo = Saldo - valor;
		std::cout << "Seu Saldo Atual: R$ " << ConsultarSaldo() << "\n";
	}
	return true;
}

void Conta::Depositar(double valor)
{
	Saldo += valor;
	std::cout << "\nDepósito de R$ " << valor << " efetuado com sucesso!";
}

void Conta::Transferir(Conta &Destino, double valor)
{
	if (Saldo < valor)
	{
		std::cout << "\nSaldo insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$ " << ConsultarSaldo() << "\n";
	}
	else
	{
		Destino.Depositar(valor);
		Saldo -= valor;
		std::cout << "\n*****Dados*****";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência realizada com sucesso!\n";
		std::cout << "Seu Saldo Atual: R$ " << ConsultarSaldo() << "\n";

	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

std::string Conta::GetTitular()
{
	return Titular;
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contém dentro o endereço: " << this << "\n";
}

int Conta::GetNumConta()
{
	return NumConta;
}

void Conta::SetBanco(std::string Banco)
{
	//(*this).Banco = Banco;
	this->Banco = Banco;
}

void Conta::SetAgencia(int Titular)
{
	this->Titular = Titular;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}