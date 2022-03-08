#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	// Declaração de referência
	// Não é criada uma região de memória que vai conter algo dentro e que seria chamada Ref
	// Ref não tem endereço na RAM
	// N ão é uma variável que podemos colocar algo dentro, é apenas um atalho,
	// um novo nome para Numero
	int &Ref = Numero;
	// Para colocar na tela o valor que a referencia referencia basta colocar
	// o nome da referencia. Não precisa desreferenciar como nos ponteiros. *ptr
	std::cout << "\nValor do Numero usando Ref: " << Ref << "\n";
	std::cout << "\nValor Endereço do Numero: " << &Numero << "\n";
	// Observe que &Ref irá retornar o endereço de Numero pois uma referencia nasce e fica 
	// como novo rótulo da variável que ela referencia estando portanto no mesmo endereço 
	// de  Numero, neste caso.
	std::cout << "\nValor Endereço do Ref: " << &Ref << "\n";
	// Cria uma variável, um espaço na RAM e dentro deste espaço ptr será colocado o 
	// endereço de memória de Numero. É bem diferente da referência pois esta não contém um espaço 
	// alocado, ela apenas é mais um nome, um rótulo.
	int* ptr = &Numero;
	std::cout << "\nValor Endereço do ptr na RAM: " << &ptr << "\n";
	std::cout << "\nValor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "\nValor Endereço contido em ptr: " << ptr << "\n";



	system("PAUSE");
	return 0;
}