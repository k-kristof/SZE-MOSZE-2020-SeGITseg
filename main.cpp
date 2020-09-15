#include <iostream>
#include "unit.h"

void printResult(Unit* winner, Unit* loser) {
  std::cout << loser->getName() << " died. " << winner->getName() << " wins.\n";
}

int main(int argc, char *argv[])
{
  Unit* A = new Unit(argv[1], std::stoi(argv[2]), std::stoi(argv[3]));
  Unit* B = new Unit(argv[4], std::stoi(argv[5]), std::stoi(argv[6]));

  std::cout << A << B;

  while (A->getHp() > 0)
  {
    A->attack(B);
    std::cout << A << B;

		if (B->getHp() == 0) { break; }

    B->attack(A);
    std::cout << A << B;
  }

  (A->getHp() > 0) ? printResult(A, B) : printResult(B, A);

  delete A;
  delete B;

  return 0;
}

