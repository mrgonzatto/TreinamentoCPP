#include <iostream>
#include <locale>

// strunct por padrão é public
// Se fosse class o padrão é private
struct Data
{
	int Dia;
	int Mes;
	int Ano;
	Data() { std::cout << "Construtor Data() de Data iniciado\n"; }
	~Data() { std::cout << "Desstrutor ~Data() de Data iniciado\n"; }
};

// Modelo de adaptação de struct em  class e estilo de definição para inicialização de valores no construtor padrão
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
	std::cout << "Dia: " << Agenda.Dia << " Mês: " << Agenda.Mes << " Ano: " << Agenda.Ano << "\n";

	Data Agenda2; // Outra forma  de inicializar um struct

	//DataClass AgendaClass;
	//std::cout << "Dia: " << AgendaClass.Dia << " Mês: " << AgendaClass.Mes << " Ano: " << AgendaClass.Ano << "\n";

	return 0;
}