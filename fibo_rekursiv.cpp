#include <iostream>
#include <string>
#include <cmath>

int fiboRekursiv(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else if (n > 2)
	{
		return fiboRekursiv(n-1)+fiboRekursiv(n-2);
	}
	return -1;
}

int main()
{
	int n;
	std::cout << "N = " << std::flush;
	std::cin >> n;
	std::cout << fiboRekursiv(n) << std::endl;
	return 0;
}
