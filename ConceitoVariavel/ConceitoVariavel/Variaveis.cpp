#include <iostream>
#include <tchar.h>

int main() 
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350;
	std::cout << "*********IN�CIO DO JOGO*********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Tamanho da vari�vel NumVidas: " << sizeof(NumVidas) << "bytes" << std::endl;
	std::cout << "Tamanho da vari�vel Pontuacao: " << sizeof(Pontuacao) << "bytes" << std::endl;
	std::cout << "Endere�o que NumVidas ocupa na RAM: " << &NumVidas << std::endl;
	std::cout << "Endere�o que Pontua��o ocupa na RAM: " << &Pontuacao << std::endl;
	std::cout << "******************" << std::endl;

	std::cout << "*********DURANTE DO JOGO*********" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "*********************************" << std::endl;



	system("PAUSE");
}