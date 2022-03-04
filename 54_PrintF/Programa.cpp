#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int NumeroInteiro (12);
	float NumeroReal (34.56);
	char Caractere ('c');
	std::string Texto{ "Vou aprender C++ e descobrir o lado sombrio da força!" };

	std::printf("Valor inteiro = %d | Valor real = %.2f | Caractere: %c | Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());	
	std::cout << "Texto da String: " << Texto << "\n";

	// %d Exibe o código do caracter na TABELA ASCII
	std::printf("O valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", Caractere, Caractere);

	system("PAUSE");
	return 0;

}