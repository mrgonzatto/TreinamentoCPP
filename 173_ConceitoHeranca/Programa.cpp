#include <iostream>

// classe pai/base/superclasse
class Base
{
// fluxo correto 1) public 2) protected 3) private
public:
	void SolicitarNumeros()
	{
		std::cout << "Num1: ";
		std::cin >> Num1;
		std::cout << "Num2: ";
		std::cin >> Num2;
		MostrarResultado(Num1, Num2);

	}

private:
	float Num1, Num2;

	float Soma(int Num1, int Num2)
	{
		return (Num1 + Num2);
	}

	void MostrarResultado(int Num1, int Num2)
	{
		std::cout << "Soma de: " << Num1 << " + " << Num2 << " = " << Soma(Num1, Num2) << "\n";
	}
};

// Classe filha/derivada/subclasse

class Derivada :public Base{ };

int main()
{
	Derivada Obj;
	Obj.SolicitarNumeros();

	system("PAUSE");
	return 0;
}