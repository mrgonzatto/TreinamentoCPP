#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int NumElementos;
	int Array[20];
	int Min, Max;

	std::cout << "Digite o n�mero de elementos desejado: ";
	std::cin >> NumElementos;

	for (int i = 0; i < NumElementos; i++)
	{
		std::cout << "Digite o elemento" << (i + 1) << ": ";
		std::cin >> Array[i];
		system("CLS");
	}	

	//Buscar o m�nimo e o m�ximo
	Min = Array[0];
	Max = Array[0];
	for (int i = 0; i < NumElementos; i++)
	{
		if (Array[i] > Max)
			Max = Array[i];
		else if (Array[i] < Min)
			Min = Array[i];
	}

	system("CLS");
	std::cout << "M�nimo: " << Min << std::endl;
	std::cout << "M�ximo: " << Max << std::endl;

	system("PAUSE");
	return 0;
}