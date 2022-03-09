#include <iostream>
#include <locale>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");

	double Notas[]{ 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0 };
	double SomaNotas{ 0.0 };
	int TamNotas = std::size(Notas);

	for (auto Nota : Notas)
	{
		SomaNotas += Nota;
	}

	std::cout << "Média do aluno: " << (SomaNotas / TamNotas) << "\n";


	system("PAUSE");
	return 0;
}