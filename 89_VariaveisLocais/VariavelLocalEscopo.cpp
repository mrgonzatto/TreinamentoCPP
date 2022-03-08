#include <iostream>

int main()
{
	int i;

	for (i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << " " << j << std::endl;
	}
	std::cout << "\nValor final de i: " << i;

	return 0;
}