#include <iostream>
#include <tchar.h>

// Retorna Inteiro
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return (Numero + NumeroASerSomado);
}

// Fun��o sem retorno
void Mensagem()
{
	std::cout << "\nMensagem de Marte...Chegamos bem...\n";
}

/*
int main()
{
	// Configura exibi��o de caracteres pt-BR
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero, NumeroASerSomado, RetornoDaFuncao;

	Mensagem();
	
	std::cout << "Digite um n�mero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o n�mero a ser somado: \n";
	std::cin >> NumeroASerSomado;

	std::cout << "A soma de " << Numero << " com " << NumeroASerSomado << " �: " << SomaAUmNumero(Numero, NumeroASerSomado) << std::endl;
	
	// Passando valores fixos/constantes como par�metro
	RetornoDaFuncao = SomaAUmNumero(200, -300);
	// Passando retorno de fun��o como par�metro para fun��o
	RetornoDaFuncao = SomaAUmNumero(300, SomaAUmNumero(Numero, NumeroASerSomado));

	system("PAUSE");
	return 0;
}
*/