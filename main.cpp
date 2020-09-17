#include <iostream>
#include "unit.h"

int main(int argc, char *argv[])
{
	Unit A(argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
	Unit B(argv[4], std::stoi(argv[5]), std::stoi(argv[6]));

	A.fight(B);

	return 0;
}
