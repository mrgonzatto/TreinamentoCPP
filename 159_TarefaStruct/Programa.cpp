#include <iostream>

void DesenharPonto3D(int x, int y, int z)
{
	std::cout << "X: " << x << " Y: " << y << " Z: " << z;
}

struct Ponto3D
{
	int X, Y, Z;

	void DesenharPonto3D(Ponto3D Pontos)
	{
		std::cout << "X: " << Pontos.X << " Y: " << Pontos.Y << " Z: " << Pontos.Z << "\n";
	}
};



int main()
{

	Ponto3D PontoC;
	PontoC.X = 3;
	PontoC.Y = 4;
	PontoC.Z = 5;
	PontoC.DesenharPonto3D(PontoC);

	system("PAUSE");
	return 0;
}