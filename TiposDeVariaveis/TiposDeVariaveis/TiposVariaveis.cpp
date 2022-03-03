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
	std::cout << "Tamanho da vari�vel Numero: " << sizeof(Numero) << "\n";
	std::cout << "Endere�o carregado na mem�ria: " << &Numero << "\n";
	std::cout << std::endl;

	std::cout << "Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da vari�vel Numero2: " << sizeof(Numero2) << "\n";
	std::cout << "Endere�o carregado na mem�ria: " << &Numero2 << "\n";
	std::cout << std::endl;

	std::cout << "Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da vari�vel Numero3: " << sizeof(Numero3) << "\n";
	std::cout << "Endere�o carregado na mem�ria: " << &Numero3 << "\n";
	std::cout << std::endl;

	std::cout << "Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da vari�vel Caractere: " << sizeof(Caractere) << "\n";
	std::cout << "Endere�o carregado na mem�ria: " << (void *)&Caractere << "\n";
	std::cout << std::endl;

	std::cout << "Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da vari�vel Caractere2: " << sizeof(Caractere2) << "\n";
	std::cout << "Endere�o carregado na mem�ria: " << (void *)&Caractere2 << "\n";
	std::cout << std::endl;

	//std::wcout << L"\u00AE" << L" \u263A";


	system("PAUSE");

	/*Exe Vari�veis*/
	int NumComputadores = 100;
	int SerialComputadores = 11111;	
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	std::cout << "\tVari�vei NumComputadores: " << NumComputadores << std::endl;
	std::cout << "\tVari�vei SerialComputadores: " << SerialComputadores << std::endl;
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	system("PAUSE");

	return 0;

}