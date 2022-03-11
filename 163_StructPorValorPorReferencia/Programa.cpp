#include <iostream>
#include <iomanip>

struct Aluno
{
	long int Matricula;
	std::string Nome;
	std::string Curso;
	int Semestre;
	double Mensalidade;
} Aluno01 = { 11111, "Fulano", "TI", 4, 990.50};

void MostrarDados(struct Aluno Dado);
// Não é necessário usar o struct e o parâmetro de alteração é passado por referência
void AlterarDados(Aluno &Dado); 
// Sobrecarga
void MostrarDados(struct Aluno* Dado);
void AlterarDados(Aluno* Dado);

int main()
{
	// Instanciação padrão
	Aluno Aluno01 = { 1111, "Fulano", "TI", 4, 990.50 };

	// Criando o objeto com ponteiro e ficará na HEAP da RAM
	// A forma de acesso não será mais por . e sim por ->
	Aluno* Aluno02 = new Aluno;

	Aluno Aluno03;// Aluno03 não é um ponteiro

	system("CLS");
	std::cout << "\n ANTES DE MODIFICAR OS DADOS";
	// Aluno01 já foi criado e instanciado na declaração
	MostrarDados(Aluno01);
	AlterarDados(Aluno01); // Para alterar o dado o parametro deve ser passado por referência
	std::cout << "\n DEPOIS DE MODIFICAR OS DADOS";
	MostrarDados(Aluno01);

	std::cout << "\n DEPOIS DE MODIFICAR OS DADOS";
	AlterarDados(Aluno02);
	
	std::cout << "\n ANTES DE MODIFICAR OS DADOS";
	AlterarDados(&Aluno03);
	MostrarDados(&Aluno03);

	system("PAUSE");
	return 0;
}

void MostrarDados(Aluno Dado)
{
	std::cout << "********** DADOS DO ALUNO **********\n";
	std::cout << "\t Nome: " << Dado.Nome << std::endl;
	std::cout << "\t Curso: " << Dado.Curso << std::endl;
	std::cout << "\t Semestre: " << Dado.Semestre << std::endl;
	std::cout << "\t Matricula: " << Dado.Matricula << std::endl;
	std::cout << "\t Mensalidade: R$ " << std::fixed << std::setprecision(2) << Dado.Mensalidade << std::endl;
}

void AlterarDados(Aluno &Dado)
{
	Dado.Nome = "Beltrano";
	Dado.Curso = "Engenharia";
	Dado.Semestre = 1;
	Dado.Matricula = 22222;
	Dado.Mensalidade = 870.99;
}

void MostrarDados(Aluno* Dado)
{
	MostrarDados(*(Dado));
}

void AlterarDados(Aluno* Dado)
{
	(*Dado).Nome = "Cicrano";
	Dado->Curso = "Biologia";
	Dado->Semestre = 2;
	Dado->Matricula = 3333;
	Dado->Mensalidade = 899.90;
}
