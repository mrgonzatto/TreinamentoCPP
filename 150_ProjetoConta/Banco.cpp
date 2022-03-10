#include <iostream>
#include <string>
#include <locale>
#include "Conta.h"

int main()
{
	{
		setlocale(LC_ALL, "portuguese");

		// Desta forma, os objetos são instaciados com o construtor padrão
		// Caso não existem, pois foi implementado o contrutor, o compilador acusará um erro;
		//Conta ContaCliente01;
		//Conta ContaCliente02;

		Conta ContaCliente00;
		Conta ContaCliente01("Bradesco", 12345, 99999, "Mauricio", 1000);
		Conta ContaCliente02;

		std::cout << "Endereço Memória Objeto ContaCliente01: " << &ContaCliente01 << "\n";
		ContaCliente01.GetEnderecoThis();;
		std::cout << "Endereço Memória Objeto ContaCliente02: " << &ContaCliente02 << "\n";
		ContaCliente02.GetEnderecoThis();;

		ContaCliente01.SetBanco("Bradesco");
		ContaCliente01.SetAgencia(1234);
		ContaCliente01.SetNumConta(9999);
		ContaCliente01.SetTitular("Fulano");
		ContaCliente01.Depositar(14690);
		ContaCliente01.Sacar(1500);

		ContaCliente01.SetBanco("Banco do Brasil");
		ContaCliente01.SetAgencia(5678);
		ContaCliente01.SetNumConta(1111);
		ContaCliente01.SetTitular("Beltrano");

		ContaCliente01.Transferir(ContaCliente02, 2000);
		ContaCliente02.Sacar(500);
		ContaCliente02.Sacar(5000);
	}

	system("PAUSE");
	return 0;
}