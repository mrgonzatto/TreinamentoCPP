#include <iostream>
#include "Biblioteca01.h"
#include "Biblioteca02.h"

int main()
{
	std::cout << "A Soma de 10 com 20 é " << Mat01::Soma(10, 20) << std::endl;
	std::cout << "A Soma de 10 com 20 é " << Mat02::Soma(10, 20) << std::endl;
	system("PAUSE");
	return 0;
}