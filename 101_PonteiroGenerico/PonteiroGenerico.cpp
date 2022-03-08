#include <iostream>

int main()
{

	setlocale(LC_ALL, "portuguese");

	int Numero{ 4890 };
	char Letra{ 'E' };

	// Ponteiro vazio, n�o possui ainda um tipo de refer�ncia
	// �til para retornar algo de uma fun��o e atribuir a um ponteiro
	// assim n�o precisamos saber antecipadamente que tipo de dado retorna	
	void* ptrG;
	// ptrg agora aponta para a vari�vel Letra
	ptrG = &Letra;

	// A instru��o abaixo acusa erro pois ptrG ainda n�o conhece o tipo e n�o sabe
	// como ler a vari�vel pois n�o calcula a quantidade de mem�ria a ser percorrida
	// em bytes, s� saber� ap�s a indica��o do tipo
	//std::cout << "Valor de letra via ptrG = " << *ptrG;

	// Primeiro faz o cast do ponteiro e depois aplica o * para realizar o 
	// desreferenciamento
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n";

	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG:" << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}