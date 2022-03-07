#include <iostream>
#include <tchar.h>

// Retorna Inteiro
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return (Numero + NumeroASerSomado);
}

// Função sem retorno
void Mensagem()
{
	std::cout << "\nMensagem de Marte...Chegamos bem...\n";
}

/*
int main()
{
	// Configura exibição de caracteres pt-BR
	_tsetlocale(LC_ALL, _T("portuguese"));

	int Numero, NumeroASerSomado, RetornoDaFuncao;

	Mensagem();
	
	std::cout << "Digite um número: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o número a ser somado: \n";
	std::cin >> NumeroASerSomado;

	std::cout << "A soma de " << Numero << " com " << NumeroASerSomado << " é: " << SomaAUmNumero(Numero, NumeroASerSomado) << std::endl;
	
	// Passando valores fixos/constantes como parâmetro
	RetornoDaFuncao = SomaAUmNumero(200, -300);
	// Passando retorno de função como parâmetro para função
	RetornoDaFuncao = SomaAUmNumero(300, SomaAUmNumero(Numero, NumeroASerSomado));

	system("PAUSE");
	return 0;
}
*/