#include <iostream>

// Protótipo de função.
/*
	Caso a função seja implementada após a sua invocação, ela precisa ter
	sua assinatura declarada no escopo do programa para que o compilador 
	entenda que esta função existe e será sobrescrita posteriormente
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