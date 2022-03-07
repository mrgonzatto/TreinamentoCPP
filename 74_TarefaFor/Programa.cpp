#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int resultado = 0;
	for (int i = 1; i <= 100; i++)
	{
		resultado += i;
	}
	std::cout << "O resultado da soma de 1 a 100 é: " << resultado << std::endl;

	system("PAUSE");
	return 0;
}