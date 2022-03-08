#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	// Declara��o de refer�ncia
	// N�o � criada uma regi�o de mem�ria que vai conter algo dentro e que seria chamada Ref
	// Ref n�o tem endere�o na RAM
	// N �o � uma vari�vel que podemos colocar algo dentro, � apenas um atalho,
	// um novo nome para Numero
	int &Ref = Numero;
	// Para colocar na tela o valor que a referencia referencia basta colocar
	// o nome da referencia. N�o precisa desreferenciar como nos ponteiros. *ptr
	std::cout << "\nValor do Numero usando Ref: " << Ref << "\n";
	std::cout << "\nValor Endere�o do Numero: " << &Numero << "\n";
	// Observe que &Ref ir� retornar o endere�o de Numero pois uma referencia nasce e fica 
	// como novo r�tulo da vari�vel que ela referencia estando portanto no mesmo endere�o 
	// de  Numero, neste caso.
	std::cout << "\nValor Endere�o do Ref: " << &Ref << "\n";
	// Cria uma vari�vel, um espa�o na RAM e dentro deste espa�o ptr ser� colocado o 
	// endere�o de mem�ria de Numero. � bem diferente da refer�ncia pois esta n�o cont�m um espa�o 
	// alocado, ela apenas � mais um nome, um r�tulo.
	int* ptr = &Numero;
	std::cout << "\nValor Endere�o do ptr na RAM: " << &ptr << "\n";
	std::cout << "\nValor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "\nValor Endere�o contido em ptr: " << ptr << "\n";



	system("PAUSE");
	return 0;
}