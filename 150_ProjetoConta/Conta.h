#pragma once
#include <iostream>
#include <string>

// No .h colocamos apenas as definições da classe
// As implementações são colocadas no .cpp

class Conta
{
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo{0.0};

public:
	// Construtor
	Conta(); // Sobrecarga do construtor padrão
	Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo);

	// Destrutor
	~Conta();

	bool Sacar(double Valor);
	void Depositar(double Valor);
	void Transferir(Conta &Destino, double valor);
	double ConsultarSaldo();

	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();	
	void GetEnderecoThis();


	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetNumConta(int NumConta);
	void SetTitular(std::string Titular);	
};