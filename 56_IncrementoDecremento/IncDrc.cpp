#include <iostream>

int main()
{
	int Num1{ 10 }, Num2 {20}, Resultado;
	std::cout << "Valor atual de Num1: " << Num1 << " e Num2: " << Num2 << "\n";
	// P�s fixado - Operador de acumula��o executa ap�s a atribui��o
	Num1 = Num2++;
	// Pr�-fixado - Operador de acumula��o executa antes da atribui��o
	Num2 = ++Num1;
	
	std::cout << "Valor atual de Num1: " << Num1 << " e Num2: " << Num2 << "\n";
	system("PAUSE");
	return 0;
}