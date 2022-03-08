#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	// A referência não pode ficar sem atribuição na sua criação
	int& RefNum{ Numero2 };
	RefNum = 5644;
	//Podemos então alterar o valor do referenciado apenas com o nome da referência sem precisar de *	

	//&RefNum = Numero;
	//A instrução é inválida por não é permitido novas atribuições às referências

	int* ptr;
	// Um ponteiro pode ser declarado sem ser inicializado!
	ptr = &Numero;
	
	*ptr = 4048;
	std::cout << "Valor de Numero: " << *ptr << "\n";
	// NO ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endereço, fazer ele apontar para outra variável
	ptr = &Numero2;
	*ptr = Numero + 1000;
	std::cout << "\nValor de Numero2: " << *ptr << "\n";
}