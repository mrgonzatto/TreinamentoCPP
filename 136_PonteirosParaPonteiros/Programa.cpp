#include <iostream>

int main()

{
	int Numero{ 110 };
	//Ponteiro1 passa apontar para variável Numero. Ou seja Ponteiro1 tem dentro dele o endereço da variável Numero
	int* Ponteiro1 = &Numero;
	std::cout << "\nEndereco de Numero = " << &Numero;
	std::cout << "\nValor Contido dentro de Ponteiro1 = " << Ponteiro1;
	std::cout << "\nEndereco em que a variavel Ponteiro1 esta carregado na memoria: " << &Ponteiro1;
	//Agora Ponteiro2 é um ponteiro para ponteiro e terá dentro dele o endereço de Ponteiro1
	int** Ponteiro2 = &Ponteiro1;
	std::cout << "\nValor contido dentro de Ponteiro2: " << Ponteiro2;
	//Para colocar na tela o valor de Numero utilizando o Ponteiro2 usamos os dois asteriscos
	std::cout << "\nValor de Numero via Ponteiro2: " << **Ponteiro2;
	return 0;

}