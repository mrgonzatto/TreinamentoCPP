#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

void ExibirMenu()
{
	int escolha = 0;
	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "\n****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";

		escolha = RetornarEscolha();
		ProcessarEscolha(escolha);

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while

}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: \n";
	std::cin >> escolha;
	return escolha;
}

int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOpção inválida!!\n";
	}
	return TipoEscolha;
}
