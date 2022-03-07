#include <iostream>

// Prot�tipo de fun��o.
/*
	Caso a fun��o seja implementada ap�s a sua invoca��o, ela precisa ter
	sua assinatura declarada no escopo do programa para que o compilador 
	entenda que esta fun��o existe e ser� sobrescrita posteriormente
*/
float soma(float num1, float num2);

int main()
{
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2)
{
	return (num1 + num2);
}