#include "Matematica.h"
#include <cmath>

int NumeroGlobal = 10;

int Soma(int Num1, int Num2)
{
	int NumeroLocal = 5;
	return Num1 + Num2;
}

int Subtracao(int Num1, int Num2)
{
	if (Num1 > Num2)
	{
		int NumeroLocalAEsteIf = 20;
	}
	return Num1 - Num2;
}

int Multiplicacao(int Num1, int Num2)
{
	return Num1 * Num2;
}

float Divisao(int Num1, int Num2)
{
	return ((float)Num1 / (float)Num2);
}

int Potencia(int Num1, int Num2)
{
	return pow(Num1, Num2);
}

float RaizQuadrada(int Num)
{
	return sqrt(Num);
}
