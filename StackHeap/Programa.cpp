#include <iostream>
#include <locale>


void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();


int VarGlobal{ 10 };

int main()
{
	int VarMain{ 00 };

	Funcao01();


	system("PAUSE");
	return 0;
}

void Funcao01()
{
	int Var01{ 01 };
	static int VarEstatica{ 20 };
	std::cout << "\n Chamando Fun��o01\n";
	std::cout << "\n Endere�o Var01" << &Var01 << "\n";
	VarEstatica++;
	std::cout << "\n Valor VarEstatica: " << VarEstatica << std::endl;

	Funcao02();
}

void Funcao02()
{
	int Var02{ 02 };
	std::cout << "\n Chamando Fun��o02\n";
	std::cout << "\n Endere�o Var02" << &Var02 << "\n";
	Funcao03();	
}

void Funcao03()
{
	int Var03{ 03 };
	std::cout << "\n Chamando Fun��o03\n";
	std::cout << "\n Endere�o Var03" << &Var03 << "\n";
	Funcao04();
}

void Funcao04()
{
	int Var04{ 04 };
	std::cout << "\n Chamando Fun��o04\n";
	std::cout << "\n Endere�o Var04" << &Var04 << "\n";
}
