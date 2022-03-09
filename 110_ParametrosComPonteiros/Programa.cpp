#include <iostream>

// * indica que o parâmetro serão ponteiros de referência
// POnteiros são variáveis que possuem nelas o endereço de outra variáve.
// Elas precisam de desreferenciamento para chegar ao valor de apontamento
void TrocaNumeros(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;

	std::cout << "\nDigite o primeiro número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo número: ";
	std::cin >> Numero2;

	std::cout << "\nValores antes de troca \n";
	std::cout << "\nNumero1: " << Numero1;
	std::cout << "\nEndereço de memória de Numero1: " << &Numero1;
	std::cout << "\nNumero2: " << Numero2;
	std::cout << "\nEndereço de memória de Numero2: " << &Numero2 << "\n\n";

	// A passagem de parâmetro por valor apenas copia os valores, não alteram os dados
	// A alteração somente efetuará dentro do escopo local da função
	// mesmo que tenham os mesmos nomes, elas são variáveis diferentes de escopos diferentes com endereços de variáveis diferentes
	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\n\nValores depois de troca \n";
	std::cout << "\nNumero1: " << Numero1;
	std::cout << "\nNumero2: " << Numero2 << std::endl;

	return 0;
}

void TrocaNumeros(int* Num1, int* Num2)
{
	// O resultado será diferente pois o ponteiro é uma outra variável
	// contendo o endereço de memória para o destino de apontamento.
	std::cout << "\nEndereço de memória de Numero1: " << &Num1;
	std::cout << "\nEndereço de memória de Numero1: " << &Num2;
	std::cout << "\nEndereço de memória contido em Numero1: " << Num1;
	std::cout << "\nEndereço de memória contido em Numero1: " << Num2;

	//Realiza o desreferenciamento para chegar no valor de destino apontado pelo ponteiro
	int Temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = Temp;

}
