#include <iostream>
#include <locale>

// strunct por padr�o � public
// Se fosse class o padr�o � private
struct Data
{
	int Dia;
	int Mes;
	int Ano;
	Data() { std::cout << "Construtor Data() de Data iniciado\n"; }
	~Data() { std::cout << "Desstrutor ~Data() de Data iniciado\n"; }
};

// Modelo de adapta��o de struct em  class e estilo de defini��o para inicializa��o de valores no construtor padr�o
class DataClass
{
public:
	int Dia;
	int Mes;
	int Ano;

public:
	//DataClass() : Dia(22), Mes(7), Ano(2022) {}
};


int main()
{
	setlocale(LC_ALL, "portuguese");

	Data Agenda;
	Agenda.Dia = 05;
	Agenda.Mes = 07;
	Agenda.Ano = 2022;
	std::cout << "Dia: " << Agenda.Dia << " M�s: " << Agenda.Mes << " Ano: " << Agenda.Ano << "\n";

	Data Agenda2; // Outra forma  de inicializar um struct

	//DataClass AgendaClass;
	//std::cout << "Dia: " << AgendaClass.Dia << " M�s: " << AgendaClass.Mes << " Ano: " << AgendaClass.Ano << "\n";

	return 0;
}