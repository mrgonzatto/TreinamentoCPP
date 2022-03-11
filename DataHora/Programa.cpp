#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#include <locale>

int main()
{
	setlocale(LC_ALL, "portuguese");
	time_t HoraAtual = time(0);
	tm* MinhaHora = localtime(&HoraAtual);
	std::cout << "\nHora: " << MinhaHora->tm_hour << ":" << MinhaHora->tm_min << ":" << MinhaHora->tm_sec;
	std::cout << "\nDia: " << MinhaHora->tm_mday;
	std::cout << "\nMês: " << MinhaHora->tm_mon;
	std::cout << "\nAno: " << MinhaHora->tm_year;


	time_t Tempo = time(NULL);
	std::cout << ctime(&Tempo);

	system("PAUSE");
	return 0;
}