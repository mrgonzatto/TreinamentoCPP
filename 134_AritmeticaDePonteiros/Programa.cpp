#include <iostream>
#include <locale>

int main()
{		
	setlocale(LC_ALL, "portuguese");

	int Vetor[] = { 1,20,-78,900,234 };
	int* ptr;
	// Aqui, ptr passa a apontar para o endereço do vetor
	// no caso, o primeiro endereço dela na pilha de memória
	// Seria a mesma coisa de ptr = &Vetor[0];
	ptr = Vetor;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endereço: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
	}

	std::cout << "\n**** Endereços com Aritmética de Ponteiros ****\n";
	std::cout << "Valor contido em ptr: " << ptr << "\n";
	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
	// ptr + 0 pega o endereço de ptr e adiciona zero, logo é o endereço do primeiro 
	// elemento do vetor, já que ptr aponta para o primeiro elemento ptr = Vetor ou 
	// ptr = &Vetor[0]
	std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
	// Como ele é do tipo int, cada salto de ptr +1 pi +2 ele avança 4 para 
	// cada adição de 1 nos bytes na RAM, o tamanho do avanço varia de acordo 
	// com o tipo de dados armazenado no vetor
	std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
	std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
	std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";
	std::cout << "Valor contido em ptr: " << ptr << "\n";

	// Observe que o valor de ptr não é alterado neste caso, ele apenas é utilizado
	// e não é atribuido em nenhum momento, o ponteiro permanece intacto


	ptr++;
	std::cout << "Valor contido em ptr após o ptr++: " << ptr << "\n";
	// Agora ptr foi alterado

	ptr = &Vetor[3]; // ptr passa a apontar para 900
	ptr--; // Agora ptr aponta para -78 ou Vetor[2]
	std::cout << "Valor apontado por ptr: " << *ptr << "\n";

	ptr = Vetor;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << *(ptr + i) << "\n"; 
	}

	std::cout << "\n****Outra forma de acessar o valor do Vetor por ponteiro ptr[i]****\n";

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << ptr[i] << "\n";
	}
	std::cout << "\n*(&Vetor[0] + 2) = "<< *(&Vetor[0] + 2) << " é o mesmo que Vetor[2] = " << Vetor[2] << "\n";

	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << *(Vetor + i) << " ";
	}
	std::cout << " ]";

	system("PAUSE");
	return 0;
}