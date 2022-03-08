#include <iostream>

int main()
{

	setlocale(LC_ALL, "portuguese");

	int Numero{ 4890 };
	char Letra{ 'E' };

	// Ponteiro vazio, não possui ainda um tipo de referência
	// Útil para retornar algo de uma função e atribuir a um ponteiro
	// assim não precisamos saber antecipadamente que tipo de dado retorna	
	void* ptrG;
	// ptrg agora aponta para a variável Letra
	ptrG = &Letra;

	// A instrução abaixo acusa erro pois ptrG ainda não conhece o tipo e não sabe
	// como ler a variável pois não calcula a quantidade de memória a ser percorrida
	// em bytes, só saberá após a indicação do tipo
	//std::cout << "Valor de letra via ptrG = " << *ptrG;

	// Primeiro faz o cast do ponteiro e depois aplica o * para realizar o 
	// desreferenciamento
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";

	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG:" << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}