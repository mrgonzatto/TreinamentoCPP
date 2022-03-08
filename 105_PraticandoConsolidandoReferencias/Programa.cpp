#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	// A refer�ncia n�o pode ficar sem atribui��o na sua cria��o
	int& RefNum{ Numero2 };
	RefNum = 5644;
	//Podemos ent�o alterar o valor do referenciado apenas com o nome da refer�ncia sem precisar de *	

	//&RefNum = Numero;
	//A instru��o � inv�lida por n�o � permitido novas atribui��es �s refer�ncias

	int* ptr;
	// Um ponteiro pode ser declarado sem ser inicializado!
	ptr = &Numero;
	
	*ptr = 4048;
	std::cout << "Valor de Numero: " << *ptr << "\n";
	// NO ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endere�o, fazer ele apontar para outra vari�vel
	ptr = &Numero2;
	*ptr = Numero + 1000;
	std::cout << "\nValor de Numero2: " << *ptr << "\n";
}