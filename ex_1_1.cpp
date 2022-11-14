#include <iostream>
#include <math.h>

int main() {
	// first part
	double base1 = 0, base2 = 0, leg = 0;

	std::cout << "Enter the value of the first base of a trapezoid: ";
	std::cin >> base1;
	std::cout << "Enter the value of the other base of the trapezoid: ";
	std::cin >> base2;
	std::cout << "Enter the value of the leg of the trapezoid: ";
	std::cin >> leg;

	std::cout << "The perimeter of the trapezoid is equal to " << base1 + base2 + 2 * leg << ".\n";
	std::cout << "The area of the trapezoid is equal to " << ((base1 + base2) / 2) * sqrt(pow(abs(base1 - base2) / 2, 2) + pow(leg, 2)) << ".\n";

	std::cout << std::endl;

	// second part
	double mass1 = 0, mass2 = 0, mass3 = 0, price1 = 8.50, price2 = 2.40, price3 = 4.10;

	std::cout << "Enter a mass of butter: ";
	std::cin >> mass1;
	std::cout << "Enter a mass of sour cream: ";
	std::cin >> mass2;
	std::cout << "Enter a mass of cream: ";
	std::cin >> mass3;

	std::cout << "Price of " << mass1 << " kg of butter: " << mass1 * price1 << ".\n";
	std::cout << "Price of " << mass2 << " kg of sour cream: " << mass2 * price2 << ".\n";
	std::cout << "Price of " << mass3 << " kg of cream: " << mass3 * price3 << ".\n";

	return 0;
}