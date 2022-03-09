#include <iostream>

// & indica que o parâmetro serão referências
void TrocaNumeros(int& Num1, int& Num2);

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
	std::cout << "\nNumero2: " << Numero2 << std::endl;
	std::cout << "\nEndereço de memória de Numero2: " << &Numero2;

	// A passagem de parâmetro por valor apenas copia os valores, não alteram os dados
	// A alteração somente efetuará dentro do escopo local da função
	// mesmo que tenham os mesmos nomes, elas são variáveis diferentes de escopos diferentes com endereços de variáveis diferentes
	TrocaNumeros(Numero1, Numero2);

	std::cout << "\nValores depois de troca \n";
	std::cout << "\nNumero1: " << Numero1;
	std::cout << "\nNumero2: " << Numero2 << std::endl;

	return 0;
}

void TrocaNumeros(int& Num1, int& Num2)
{
	std::cout << "\nEndereço de memória de Numero1: " << &Num1;
	std::cout << "\nEndereço de memória de Numero1: " << &Num2;

	int Temp{ Num1 };	
	Num1 = Num2;
	Num2 = Temp;

}
