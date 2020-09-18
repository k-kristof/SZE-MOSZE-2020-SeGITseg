#include <iostream>
#include "unit.h"

int main(int argc, char *argv[])
{
	if (argc != 7)
	{
		std::cout << "Too many/few arguments detected!";
		return 1;
	}
	else
	{
		Unit A(argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
		Unit B(argv[4], std::stoi(argv[5]), std::stoi(argv[6]));

		std::cout << A << B;

		A.fight(B);
	}
	return 0;
}