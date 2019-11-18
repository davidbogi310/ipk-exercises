#include <iostream>
#include <string>
#include <cmath>

int fiboIter(int numberOfElements)
{
	int f1;
	int f2;
	f1 = 0;
	f2 = 1;
	
	
	
	if (numberOfElements >=1)
	{
		int fneu;
		int i;
		i=2;
		std::cout << "0";
		if (numberOfElements > 1)
		{
			std::cout << ",1";
			while (i < numberOfElements)
			{
				fneu = f1 + f2;
				f1 = f2;
				f2 = fneu;
				std::cout  << "," << f2;
				i++;
			}
		}
		std::cout << std::endl;
		return fneu;
	}
	std::cout << "-1" << std::endl;
	return -1;
}

int main()
{
	int n;
	std::cout << "N = " << std::flush;
	std::cin >> n;
	fiboIter(n);
	return 0;
}
