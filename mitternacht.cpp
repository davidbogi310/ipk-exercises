#include <iostream>
#include <string>
#include <cmath>

void showZeros(double a, double b, double c)
{
	double x1;
	x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	double x2;
	x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	if (std::isnan(x1)||std::isnan(x2))
	{
		std::cout << "Fehler" <<std::endl;
		return;
	}
	
	if (pow(b,2)-4*a*c < 0)
	{
		std::cout << "Komplexe Zahl" <<std::endl;
		return;
	}
	
	if (x1 == x2)
	{
		std::cout << "X=" << x1 << std::endl;
		return;
	}
	
	
	std::cout << "x1=" << x1 << ",x2=" << x2 << std::endl;
	return;
	
	
	
	
}

int main ()
{
	double a;
	std::cout << "a = " << std::flush;
	std::cin >> a;
	
	double b;
	std::cout << "b = " << std::flush;
	std::cin >> b;
	
	double c;
	std::cout << "c = " << std::flush;
	std::cin >> c;

	showZeros(a,b,c);
	return 0;
}
