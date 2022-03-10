#include <iostream>

void MostrarVetor(int Array[], int TamanhoVetor);
void AlteraVetor(int Array[], int TamanhoVetor);

int main()
{
	int Vetor[] = { 1,2,3,4,5,6,7,8,9,10 };

	// Sizeof retorna o tamanho da variável em bytes
	// Num de elementos * o tamanho do tipo dos índices
	int TamanhoVetor = sizeof(Vetor);
	//int LengthVetor = sizeof(Vetor) / sizeof(int);
	int LengthVetor = std::size(Vetor);

	std::cout << "\nVetor Original";
	MostrarVetor(Vetor, LengthVetor);
	AlteraVetor(Vetor, LengthVetor);
	std::cout << "\nVetor Alterado?";
	MostrarVetor(Vetor, LengthVetor);
	// MostrarVetor(&Vetor[0], LengthVetor); É A MESMA COISA

	// O vetor sempre é passado por referência para parâmetros de funções

	system("PAUSE");
	return 0;
}

void MostrarVetor(int Array[], int TamanhoVetor)
{	
	for (int i = 0; i < TamanhoVetor; i++)
	{
		std::cout << "- " << Array[i];
	}
	std::cout << "\n\n";
}

void AlteraVetor(int *Array, int TamanhoVetor)
{
	for (int i = 0; i < TamanhoVetor; i++)
	{
		Array[i] = Array[i] * 2;
	}

}
