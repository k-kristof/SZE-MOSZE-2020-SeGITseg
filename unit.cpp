#include <iostream>
#include "unit.h"

Unit::Unit(const std::string name, const int hp, const int dmg)
	: name(name), hp(hp), dmg(dmg) {}

std::string Unit::getName() const
{
	return name;
}

int Unit::getHp() const
{
	return hp;
}

int Unit::getDmg() const
{
	return dmg;
}

void Unit::fight(Unit &other)
{
	int attHP = hp;
	int defHP = other.getHp();

	std::cout << name << ": HP: " << attHP << ", DMG: " << dmg << std::endl;
	std::cout << other.getName() << ": HP: " << defHP << ", DMG: " << other.getDmg() << std::endl;

	while (defHP > 0 && attHP > 0)
	{
		std::cout << name << " -> " << other.getName() << std::endl;
		defHP = defHP - dmg;
		if (defHP < 0)
			defHP = 0;
		std::cout << name << ": HP: " << attHP << ", DMG: " << dmg << std::endl;
		std::cout << other.getName() << ": HP: " << defHP << ", DMG: " << other.getDmg() << std::endl;

		if (defHP == 0)
			break;

		std::cout << other.getName() << " -> " << name << std::endl;
		attHP = attHP - other.getDmg();
		if (attHP < 0)
			attHP = 0;
		std::cout << name << ": HP: " << attHP << ", DMG: " << dmg << std::endl;
		std::cout << other.getName() << ": HP: " << defHP << ", DMG: " << other.getDmg() << std::endl;
	}

	if (defHP == 0)
	{
		std::cout << other.getName() << " died. " << name << " wins.\n";
	}
	else
	{
		std::cout << name << " died. " << other.getName() << " wins.\n";
	}
}
