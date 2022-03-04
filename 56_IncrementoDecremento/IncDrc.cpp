#include <iostream>

int main()
{
	int Num1{ 10 }, Num2 {20}, Resultado;
	std::cout << "Valor atual de Num1: " << Num1 << " e Num2: " << Num2 << "\n";
	// Pós fixado - Operador de acumulação executa após a atribuição
	Num1 = Num2++;
	// Pré-fixado - Operador de acumulação executa antes da atribuição
	Num2 = ++Num1;
	
	std::cout << "Valor atual de Num1: " << Num1 << " e Num2: " << Num2 << "\n";
	system("PAUSE");
	return 0;
}