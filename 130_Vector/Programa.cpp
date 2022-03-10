#include <iostream>
#include <iomanip>
#include <locale>
#include <vector>

int main()
{
	setlocale(LC_ALL, "portuguese");

	std::vector < int > v = { 7, 5, 16, 8 };

	v.push_back(25);
	v.push_back(13);

	std::cout << "v = { ";
	for (int n : v)
	{
		std::cout << n << " ";
	}
	std::cout << "}";

	system("PAUSE");
	return 0;
}