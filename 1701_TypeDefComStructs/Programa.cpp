#include <iostream>

typedef struct Livro
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;

} RegistroLivro;

struct LivroVariavel
{
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;

} LivroVariavel;

int main()
{	
	struct Livro Aluno01[5];	

	// Variável declarada normalmente fica na STACK
	RegistroLivro Aluno02;
	Aluno02.ID = 0001;
	Aluno02.Preco = 33.99;
	Aluno02.Titulo = "Matrix";
	Aluno02.Editora = "Abril";

	// Ponteiro na HEAP
	RegistroLivro* Ponteiro;
	Ponteiro = &Aluno02;

	Ponteiro->ID = 0002;

	system("PAUSE");
	return 0;
}