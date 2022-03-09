#include <iostream>

// * indica que o par�metro ser�o ponteiros de refer�ncia
// POnteiros s�o vari�veis que possuem nelas o endere�o de outra vari�ve.
// Elas precisam de desreferenciamento para chegar ao valor de apontamento
void TrocaNumeros(int* Num1, int* Num2);

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
	std::cout << "\nNumero2: " << Numero2;
	std::cout << "\nEndere�o de mem�ria de Numero2: " << &Numero2 << "\n\n";

	// A passagem de par�metro por valor apenas copia os valores, n�o alteram os dados
	// A altera��o somente efetuar� dentro do escopo local da fun��o
	// mesmo que tenham os mesmos nomes, elas s�o vari�veis diferentes de escopos diferentes com endere�os de vari�veis diferentes
	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\n\nValores depois de troca \n";
	std::cout << "\nNumero1: " << Numero1;
	std::cout << "\nNumero2: " << Numero2 << std::endl;

	return 0;
}

void TrocaNumeros(int* Num1, int* Num2)
{
	// O resultado ser� diferente pois o ponteiro � uma outra vari�vel
	// contendo o endere�o de mem�ria para o destino de apontamento.
	std::cout << "\nEndere�o de mem�ria de Numero1: " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Numero1: " << &Num2;
	std::cout << "\nEndere�o de mem�ria contido em Numero1: " << Num1;
	std::cout << "\nEndere�o de mem�ria contido em Numero1: " << Num2;

	//Realiza o desreferenciamento para chegar no valor de destino apontado pelo ponteiro
	int Temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = Temp;

}
