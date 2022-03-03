#include <iostream>

// Área de definição dos DEFINES
//#define NUM_VIDAS 10


int main()
{
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereço de memória de NUM_VIDAS: " << &NUM_VIDAS << "/n";
	system("PAUSE");

	return 0;
}