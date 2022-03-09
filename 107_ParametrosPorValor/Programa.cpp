#include <iostream>

// & indica que o par�metro ser�o refer�ncias
void TrocaNumeros(int& Num1, int& Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;

	std::cout << "\nDigite o primeiro n�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o segundo n�mero: ";
	std::cin >> Numero2;

	std::cout << "\nValores antes de troca \n";
	std::cout << "\nNumero1: " << Numero1;
	std::cout << "\nEndere�o de mem�ria de Numero1: " << &Numero1;
	std::cout << "\nNumero2: " << Numero2 << std::endl;
	std::cout << "\nEndere�o de mem�ria de Numero2: " << &Numero2;

	// A passagem de par�metro por valor apenas copia os valores, n�o alteram os dados
	// A altera��o somente efetuar� dentro do escopo local da fun��o
	// mesmo que tenham os mesmos nomes, elas s�o vari�veis diferentes de escopos diferentes com endere�os de vari�veis diferentes
	TrocaNumeros(Numero1, Numero2);

	std::cout << "\nValores depois de troca \n";
	std::cout << "\nNumero1: " << Numero1;
	std::cout << "\nNumero2: " << Numero2 << std::endl;

	return 0;
}

void TrocaNumeros(int& Num1, int& Num2)
{
	std::cout << "\nEndere�o de mem�ria de Numero1: " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Numero1: " << &Num2;

	int Temp{ Num1 };	
	Num1 = Num2;
	Num2 = Temp;

}
