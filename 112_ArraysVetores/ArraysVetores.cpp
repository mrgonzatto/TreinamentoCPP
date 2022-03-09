#include <iostream>
#include <string>

/* Crie um programa que receba o nome do aluno, 
   5 notas e mostre a média */

int main()
{
	setlocale(LC_ALL, "portuguese");

	float Notas[5]{ 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	float Media, Soma{0.0};
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite Nota" << (i + 1) << " do Aluno: ";
		std::cin >> Notas[i];
		Soma += Notas[i];
		system("CLS");
	}

	Media = Soma / 5;

	std::cout << "\nA média das notas é: " << Media << std::endl;

	system("PAUSE");
	return 0;
}