#include <iostream>
#include <iomanip>
#include <tchar.h>

#include <fcntl.h>
#include <io.h>

int main() 
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	//_setmode(_fileno(stdout), _O_U16TEXT);

	int Numero;
	Numero = 45;
	float Numero2;
	Numero2 = 55.56f;
	double Numero3;
	Numero3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';
	bool bAchou;

	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd';
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "0123456789";
	std::cout << "Valor de bAchou: " << bAchou << "\n";

	std::cout << "Numero: " << Numero << std::endl;
	std::cout << "Tamanho da variável Numero: " << sizeof(Numero) << "\n";
	std::cout << "Endereço carregado na memória: " << &Numero << "\n";
	std::cout << std::endl;

	std::cout << "Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da variável Numero2: " << sizeof(Numero2) << "\n";
	std::cout << "Endereço carregado na memória: " << &Numero2 << "\n";
	std::cout << std::endl;

	std::cout << "Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da variável Numero3: " << sizeof(Numero3) << "\n";
	std::cout << "Endereço carregado na memória: " << &Numero3 << "\n";
	std::cout << std::endl;

	std::cout << "Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da variável Caractere: " << sizeof(Caractere) << "\n";
	std::cout << "Endereço carregado na memória: " << (void *)&Caractere << "\n";
	std::cout << std::endl;

	std::cout << "Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da variável Caractere2: " << sizeof(Caractere2) << "\n";
	std::cout << "Endereço carregado na memória: " << (void *)&Caractere2 << "\n";
	std::cout << std::endl;

	//std::wcout << L"\u00AE" << L" \u263A";


	system("PAUSE");

	/*Exe Variáveis*/
	int NumComputadores = 100;
	int SerialComputadores = 11111;	
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "\tVariávei NumComputadores: " << NumComputadores << std::endl;
	std::cout << "\tVariávei SerialComputadores: " << SerialComputadores << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	system("PAUSE");

	return 0;

}