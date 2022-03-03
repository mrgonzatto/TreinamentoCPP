#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int NumeroInteiro (12);
	float NumeroReal (34.56);
	char Caractere ('c');

	std::string Texto{ "Texto da String" };
	std::printf("Valor inteiro = %d | Valor real = %.2f | Caractere: %c  \n", NumeroInteiro, NumeroReal, Caractere);	

	system("PAUSE");
	return 0;

}