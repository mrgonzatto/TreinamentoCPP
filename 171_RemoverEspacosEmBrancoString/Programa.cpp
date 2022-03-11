#include <iostream>
#include <string>

std::string str1;
std::string str2;

int main()
{

	std::cout << "Por favor, insira alguns espaços em branco seguidos de uma frase: \n";
	std::getline(std::cin >> std::ws, str1);

	std::cout << "Por favor, insira alguns espaços em branco seguidos de uma frase: \n";
	std::getline(std::cin >> std::ws, str2);

	std::cout << "VC escreveu:" << std::endl << str1 << std::endl << str2 << std::endl;

	return 0;
}