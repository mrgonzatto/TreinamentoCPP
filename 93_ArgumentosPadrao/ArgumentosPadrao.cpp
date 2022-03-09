#include <iostream>

// Atenção, os valores padrão podem ser definidos apenas
// nas variáveis da direita para a esquerda
void Coordenadas(int x, int y = 7, int z = 1);

int main()
{
	Coordenadas(5, 4, 3);
	Coordenadas(3, 4, 5);
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")" << std::endl;
}