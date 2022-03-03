#include <iostream>

int main()
{
	int var1 = 57;
	float var2 = 55.22f;
	double var3 = 5.6;
	char var4 = 'M';

	std::cout << "var1 = " << var1 << "; " << sizeof(var1) << "b; RAM Address = " << &var1 << std::endl;
	std::cout << "var2 = " << var2 << "; " << sizeof(var2) << "b; RAM Address = " << &var2 << std::endl;
	std::cout << "var3 = " << var3 << "; " << sizeof(var3) << "b; RAM Address = " << &var3 << std::endl;
	std::cout << "var4 = " << var4 << "; " << sizeof(var4) << "b; RAM Address = " << (void *)&var4 << std::endl;

	system("PAUSE");	

	return 0;
}