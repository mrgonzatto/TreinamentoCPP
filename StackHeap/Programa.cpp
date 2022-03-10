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
	std::cout << "\n Chamando Função01\n";
	std::cout << "\n Endereço Var01" << &Var01 << "\n";
	VarEstatica++;
	std::cout << "\n Valor VarEstatica: " << VarEstatica << std::endl;

	Funcao02();
}

void Funcao02()
{
	int Var02{ 02 };
	std::cout << "\n Chamando Função02\n";
	std::cout << "\n Endereço Var02" << &Var02 << "\n";
	Funcao03();	
}

void Funcao03()
{
	int Var03{ 03 };
	std::cout << "\n Chamando Função03\n";
	std::cout << "\n Endereço Var03" << &Var03 << "\n";
	Funcao04();
}

void Funcao04()
{
	int Var04{ 04 };
	std::cout << "\n Chamando Função04\n";
	std::cout << "\n Endereço Var04" << &Var04 << "\n";
}
