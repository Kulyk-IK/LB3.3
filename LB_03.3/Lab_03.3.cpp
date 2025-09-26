// Lab_03_3.cpp
// < Кулик Дмитро >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 13

#include <iostream>
#include <cmath>

int main() {
	double R;
	double x;

	std::cout << "R = "; std::cin >> R;
	std::cout << "x = "; std::cin >> x;

	//Повне розгалудеження
	{
		double result = 0;

		if (x <= -R)
			result = x + R;

		else if (x >= -R && x <= 0)
			result = sqrt(pow(R, 2) - pow(x, 2));

		else if (x >= 0 && x <= 6)
			result = -(R / 6) * x + R;

		else
			result = x - 6;

		std::cout << result << std::endl;
	}
	return 0;
}