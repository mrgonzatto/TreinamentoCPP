#include <cstdlib>
#include <ctime>
#include <iostream>
#include <tchar.h>

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	srand((unsigned)time(0));
	int randomNumber = rand();
	cout << "N�mero aleat�rio: " << randomNumber << endl;
	system("PAUSE");

	// Aleat�rio dentro de um intervalo
	srand((unsigned)time(0));
	randomNumber = 0;
	for ( int i = 0; i < 10; i++ )
	{
		randomNumber = (rand() % 35) + 1;
		cout << "N�meros aleat�rios dentro de um intervalo: " << randomNumber << endl;
	}


	return 0;
}